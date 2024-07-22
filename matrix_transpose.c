#include<stdio.h>
#include<stdlib.h>
int main() {
	int a[10][10],b[10][10],c[10][10];
	int m,n,i,j,s,k;
	printf("Enter the row and column of the Matrix A: \n");
	scanf("%d%d",&m,&n);
	printf("\n Enter the elements of the Matrix A: \n");
	for(i=0;i<m;i++) {
		for(j=0;j<n;j++) {
			scanf("%d",&a[i][j]);
		}
	}
	printf("\n The first Matrix A: \n");
	for(i=0;i<m;i++) {
		for(j=0;j<n;j++) {
			printf("%d\t",a[i][j]);
		}
		printf("\n");
	}
	printf("\n The transpose matrix is Matrix B: \n");
	for(i=0;i<n;i++) {
		for(j=0;j<m;j++) {
			b[i][j]=a[j][i];
			printf("%d\t",b[i][j]);
		}
		printf("\n");
	}
	for(i=0;i<m;i++) {
		for(j=0;j<n;j++) {
			s=0,c[i][j]=0;
			for(k=0;k<n;k++) {
				s=s+a[i][k]*b[k][j];
				c[i][j]=s;
			}
		}
	}
	printf("\nthe matrix multiplication is:\n");
	for(i=0;i<n;i++) {
		for(j=0;j<m;j++) {
			printf("%d\t",c[i][j]);
		}
		printf("\n");
	}
	return 0;
}
