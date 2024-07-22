#include<stdio.h>
int main() {
	int i,j,n,k;
	char c='a';
	printf("enter the value of n: ");
	scanf("%d",&n);
	for(i=n;i>=1;i--) {
		for(j=1;j<=n-i;j++) {
			printf(" ");
		}
		for(k=1;k<=2*i-1;k++) {
			printf("%c",c++);
		}
	printf("\n");	
	}
	return 0;
}
