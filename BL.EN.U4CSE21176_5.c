#include<limits.h>
int h = 42;
/*@
requires \valid(a)&&\valid(b);
ensures *a==\old(*b)&&*b==\old(*a);
*/
void swap(int *a,int *b){
int temp = *a;
*a = *b;
*b = temp;
}
int main(){
int x = 37;
int y = 91;
//@assert h == 42;
swap(&x,&y);
//@assert h == 42;
}
