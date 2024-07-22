#include<stdio.h>
int main() {
	int a,b;
	printf("enter the first number: ");
	scanf("%d",&a);
	printf("enter the second number: ");
	scanf("%d",&b);
	int sum = a+b;
	int sub = a-b;
	printf("sum is %d",sum);
	printf("sub is %d",sub);
	return 0;
}
