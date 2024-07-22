#include<stdio.h>
int main() {
int i,j,k,n;
printf("enter the number of rows:");
scanf("%d",&n);
for(i=n;i>=0;i--) {
	for(j=1;j<=(n-i);j++) {
		printf("*");
	}
	for(k=1;k<=2*i;k++) {
		printf(" ");
	}
	for(j=1;j<=(n-i);j++) {
		printf("*");
	}
	printf("\n");
}
return 0;
}

