#include<stdio.h>
void main(){
	int i,j, a[3]={1,2,3},b[2][3]={{11,12,13},{14,15,16}};
	
	for(i=0;i<3;i++){
	
		printf("a[%d]=%d\t",i,a[i]);
		printf("%d[a]=%d\t",i,i[a]);
		printf("*(a+%d)=%d\t",i,*(a+i));
		printf("*(%d+a)=%d\n",i,*(i+a));
	}
	printf("\n\n");
	
	for(i=0;i<2;i++){
		printf("b[%d]=%d\t",i,b[i]);
		printf("%d[b]=%d\t",i,i[b]);
		printf("*(b+%d)=%d\t",i,*(b+i));
		printf("*(%d+b)=%d\n",i,*(i+b));	
	}
	printf("\n\n");
	
	for(i=0;i<2;i++)
		for(j=0;j<3;j++){
			printf("b[%d]+%d=%d\t",i,j,b[i]+j);
			printf("%d[b]+%d=%d\t",i,j,i[b]+j);
			printf("*(b+%d)+%d=%d\t",i,j,*(b+i)+j);
			printf("*(%d+b)+%d=%d\n",i,j,*(i+b)+j);	
		}
		
	printf("\n\n");
	
	for(i=0;i<2;i++)
		for(j=0;j<3;j++){
			printf("b[%d][%d]=%d\t",i,j,b[i][j]);
			printf("%d[b][%d]=%d\t",i,j,i[b][j]);
			printf("*(b[%d]+%d)=%d\t",i,j,*(b[i]+j));
			printf("*(*(b+%d)+%d)=%d\t",i,j,*(*(b+i)+j));
			printf("*(*(b+%d)+%d)=%d\n",i,j,*(*(i+b)+j));	
		}
	}
