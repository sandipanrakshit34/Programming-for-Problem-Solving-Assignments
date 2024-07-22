#include<stdio.h>
int main() {
	int i,n,a,b,flag=0,c=0;
	printf("enter lower range:");
	scanf("%d",&a);
	printf("enter upper range:");
	scanf("%d",&b);
	printf("1 is not prime nor non-prime\n");
	for(n=a;n<=b;n++) {
		for(i=2;i<n;i++) {
			flag=0;
			if(n%i==0) {
				flag=1;
				break;
			}
		}
		if(flag==0) {
			printf("prime= %d\n",n);
			c++;
		}
	}
	return 0;
}
