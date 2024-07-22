#include<stdio.h>
int main() {
	int i,j,n,g;
	printf("enter the value of n: ");
	scanf("%d",&n);
	printf("enter the number of repetation g: ");
	scanf("%d",&g);
	for(i=1;i<=g;i++) {         //outer for loop detects column
		for(j=1;j<=n;j++) {     //inner for loop detects row
			printf("%d",j);
		}
		printf("\n");
	}
	return 0;
}
