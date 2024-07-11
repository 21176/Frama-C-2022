#include<stddef.h>
/*@
requires \valid(array + (0..length-1));
assigns array[0..length-1];
ensures \forall size_t i; 0 <= i < length ==> array[i] == 0;
*/
int* search(int* array,size_t length,int element){
/*@
loop invariant 0 <= i <=length;
loop invariant \forall size_t j; 0 <= j < i ==> array[j] != element;
loop assigns i;
loop variant length-i;
*/
for(size_t i=0;i<length;i++){
if(array[i] == element)
return &array[i];
return NULL;
}
int main(){
int a[]={1,2,3,4,5};
reset(a,5,3);
}

