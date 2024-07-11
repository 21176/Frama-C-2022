#include<limits.h>
/*@
logic integer ax_b(integer a,integer x,integer b) = a*x+b;
*/
/*@
requires 3*x>=INT_MIN;
requires INT_MIN<=ax_b(3,x,4)<INT_MAX;
assigns \nothing;
ensures \result==ax_b(3,x,4);
*/
int fun(int x){
return 3*x+4;
}
int main(){
int a=4;
int r=fun(a);
//@assert r==16;
}

