#include<stdio.h>
int main() {
	float num=1,count=1,sum=0,fact,n;
	printf("enter the value of n:\n");
	scanf("%f",&n);
	for(num=2;num<=n;num++) {
		fact=1;
		for(count=1;count<=num;count++) {
			fact=fact*count;
		}
	sum=sum+((num*11)/fact);
	}
	printf("sum of the series is: %f",sum+1);
return 0;
}
