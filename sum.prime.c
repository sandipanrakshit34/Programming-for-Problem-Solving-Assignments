#include<stdio.h>
int main() {
	int i,n,a,flag=0,sum=0,c=0;
	printf("enter the number:");
	scanf("%d",&n);
	printf("1 is not prime nor non-prime\n");
	for(a=2;a<=n;a++) {
		for(i=2;i<=a/2;i++) {
			flag=0;
			if(a%i==0) {
				flag=1;
				break;
			}
		}
		if(flag==0) {
			sum=sum+a;
		}
	}
	printf("sum is %d",sum);
	return 0;
}
