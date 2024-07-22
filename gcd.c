#include<stdio.h>
int gcd(int a,int b) {
   if(b == 0)
   return a;
   else
   return gcd(b,a%b);
}
int main() {
	int x,y;
	printf("enter the two numbers:\n");
	scanf("%d%d",&x,&y);
	printf("the gcd of %d and %d is : %d",x,y,gcd(x,y));
	return 0;
}