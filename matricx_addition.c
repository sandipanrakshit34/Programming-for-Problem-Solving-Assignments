#include<stdio.h>
#include<stdlib.h>
int main() {
	int a[10][10],b[10][10],c[10][10];
	int r1,r2,c1,c2,i,j;
	printf("Enter the row and column of the first Matrix A: \n");
	scanf("%d%d",&r1,&c1);
	printf("Enter the row and column of the second Matrix B: \n");
	scanf("%d%d",&r2,&c2);
	if(r1!=r2||c1!=c2) {
		printf("\n The both matrices are not addable\n");
	}
	else {
		printf("\n Enter the elements of the first Matrix A: \n");
		for(i=0;i<r1;i++) {
			for(j=0;j<c1;j++) {
				scanf("%d",&a[i][j]);
			}
		}
		printf("\n Enter the elements of the second Matrix B: \n");
		for(i=0;i<r2;i++) {
			for(j=0;j<c2;j++) {
				scanf("%d",&b[i][j]);
			}
		}
		printf("\n The first Matrix A: \n");
		for(i=0;i<r1;i++) {
			for(j=0;j<c1;j++) {
				printf("%d\t",a[i][j]);
			}
			printf("\n");
		}
		printf("\n The second Matrix B: \n");
		for(i=0;i<r2;i++) {
			for(j=0;j<c2;j++) {
				printf("%d\t",b[i][j]);
			}
			printf("\n");
		}
		for(i=0;i<r1;i++) {
			for(j=0;j<c1;j++) {
				c[i][j]=a[i][j]+b[i][j];
			}
		}
		printf("\n The product of two Matrix: \n");
		printf("\n matrix c: \n");
		for(i=0;i<r1;i++) {
			for(j=0;j<c1;j++) {
				printf("%d\t",c[i][j]);
			}
			printf("\n");
	    }
	}
	return 0;
}
