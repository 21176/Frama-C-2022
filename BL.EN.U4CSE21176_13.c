/*@
requires x>0;
requires y>0;
ensures \result>0;
ensures (\forall int d;d>0 && x%d==0 && y%d==0 ==> \result%d==0);
ensures (\forall int d;d>0 && \result%d==0 ==> x%d==0 ==> y%d==0);
assigns \nothing;
*/
int gcd(int x,int y){
/*@
loop invariant x>0;
loop invariant y>=0;
loop invariant x>y ==> x%y==0;
loop assigns x,y;
*/
while(y!=0){
int temp = y;
y = x % y;
x = temp;
}
return x;
} 
