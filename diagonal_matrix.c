#include<stdio.h>
int main() {
	int n,a[20][20],i,j;
	printf("enter the row and column number of the matrix: ");
	scanf("%d",&n);
	printf("enter the elements of the matrix:\n");
	for(i=0;i<n;i++) {
		for(j=0;j<n;j++) {
			scanf("%d",&a[i][j]);
		}
	}
	printf("the elements of the matrix\n:");
	for(i=0;i<n;i++) {
		for(j=0;j<n;j++) {
			printf("%d\t",a[i][j]);
		}
		printf("\n");
	}
	printf("the left diagonal elements of the matrix:\n");
	for(i=0;i<n;i++) {
		for(j=0;j<n;j++) {
			if(i==j)
			printf("%d\t",a[i][j]);
		}
		printf("\n");
	}
		printf("the right diagonal elements of the matrix:\n");
	for(i=0;i<n;i++) {
		for(j=0;j<n;j++) {
			if(i+j==(n-1))
			printf("%d",a[i][j]);
		}
		printf("\n");
	}
	return 0;
}
