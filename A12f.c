#include<stdio.h>
int main() {
	int i,j,n,c;
	printf("enter the row value c: ");
	scanf("%d",&c);
	printf("enter the column value n: ");
	scanf("%d",&n);
	for(i=c;i>=1;i--) {
		for(j=n;j>=i;j--) {
			printf("%d",j);
		}
		printf("\n");
	}
	return 0;
}
