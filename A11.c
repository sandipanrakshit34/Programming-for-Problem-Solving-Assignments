#include<stdio.h>
int main () {
	int n,i;
	int flag=0,c=0;
	printf("enter the number ");
	scanf("%d",&n);
	for(i=2;i<=sqrt(n);i++) {
		
	    if(n%i==0) {
		flag=1;
		c++;
		break;
	    }
	}
	printf("\n c=%d",c);
	if(flag==1) {
		printf("\n %d is not prime",n);
	}
	else {
		printf("\n %d is prime",n);
	}
	return 0;
}
