#include<stdio.h>
int main () {
	int n,i,a,b,flag,c=0;
	printf("enter the lower range");
	scanf("%d",&a);
	printf("enter the upper range");
	scanf("%d",&b);
	if(a<b) {
		if(a==1) {
			printf("1 neither prime nor non-prime");
			a++;
		}
		for(n=a;n<=b;n++) {
			for(i=2;i<=sqrt(n);i++) {
			    flag=0;
		        if(n%i==0) {
		        	flag=1;
		        	break;
				}  	
			}
			if(flag==0) {
				printf("\n prime=%d",n);
				c++;
			}
		}
		printf("\n number of prime in the give range=%d",c);
	}
	else {
		("\n invalid rage");
	}
	return 0;
}
