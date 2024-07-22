#include<stdio.h>
int main(){
	int a[2][3]={{1,2,3},{4,5,6}};
	int i,j,*p;
	p=&a[0][0];
	printf("\narray values:");
	for(i=0;i<2;i++){
		for(j=0;j<3;j++){
			printf("\nval=%d ",*(p+i*3+j));
		}
		printf("\n");
	}
	
}
