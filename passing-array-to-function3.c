void display(int [][3],int,int);
#include<stdio.h>
int main(){
	int a[2][3]={	{10,20,30},{40,50,60}	 };
	
	display(a,2,3);		
	return 0;	
}
void display(int p[][3],int r,int c){
		
	int i,j;
	for(i=0;i<r;i++){
		for(j=0;j<c;j++)
			printf("%d ",p[i][j]);
		printf("\n");
	}

}
