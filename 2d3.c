#include<stdio.h>
int main(){
	int a[2][3],b[3][2],c[2][2];
	int i,j,k;
	printf("\n enter first array element");
	for(i=0;i<2;i++)
		for(j=0;j<3;j++){
			printf("\n enter array element");
			scanf("%d",&a[i][j]);
		}
		printf("\n display first array element");
		for(i=0;i<2;i++){
			printf("\n");
			for(j=0;j<3;j++)
				printf("%d ",a[i][j]);
			
		}
		printf("\n enter second array element");
		for(i=0;i<3;i++)
			for(j=0;j<2;j++){
				printf("\n enter array element");
				scanf("%d",&b[i][j]);
		}
		printf("\n display second array element");
		for(i=0;i<3;i++){
			printf("\n");
			for(j=0;j<2;j++)
				printf("%d ",b[i][j]);
			
		}
		for(i=0;i<2;i++){
			printf("\n");
			for(j=0;j<2;j++){
				//c[i][j]=a[i][j]+b[i][j];
				c[i][j]=0;
				for(k=0;k<3;k++)
					c[i][j]+=a[i][k]*b[k][j];
					printf("%d ",c[i][j]);
			}
			
		}
		/*printf("\n display resultant array element");
		for(i=0;i<2;i++){
			printf("\n");
			for(j=0;j<2;j++)
				
			
		}*/
	
	return 0;
}
