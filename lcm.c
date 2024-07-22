#include<stdio.h>
int gcd(int a,int b) {
   if(b == 0)
   return a;
   else
   return gcd(b,a%b);
}
int lcm(int a,int b) {
    return a/gcd(a,b)*b;
}
int main() {
	int x,y;
	printf("enter the two numbers:\n");
	scanf("%d%d",&x,&y);
	printf("the gcd of %d and %d is : %d",x,y,lcm(x,y));
	return 0;
}