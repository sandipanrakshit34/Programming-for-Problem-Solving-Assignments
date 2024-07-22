#include<stdio.h>
int main() {
	int i,n,a,sum=0,c=0,sum2=0;
	printf("enter the number:");
	scanf("%d",&n);
	for(a=2;a<=n;a++) {
		for(i=1;i<=a;i++) {
			if(a%i==0) {
				sum=sum+i;
			}
		}
	if(sum==a) {
		printf("perfect = %d",sum);
		c++;
		}
		
	}

	return 0;
}
