#include<stdio.h>
int main(){
	int a[20];
	//static int c1,c2,c3;
	int n,i,j,temp;
	int k;
	
	printf("\n How many values u12 enter in the array:\n");
	scanf("%d",&n);
	
	printf("\n Enter %d element values in the array\n",n);
	for(i=0;i<n;i++)
		scanf("%d",&a[i]);
	
	printf("\n Array values BEFORE sorting\n");
	for(i=0;i<n;i++)
		printf("%d ",a[i]);
	//bubble sort
	for(i=0;i<n-1;i++){
		//++c1;
		for(j=0;j<n-i-1;j++){
			//++c2;
			if(a[j]>a[j+1]){
				//++c3;
				temp=a[j];
				a[j]=a[j+1];
				a[j+1]=temp;
			}
		}
		printf("\n Array values AFTER each pass:\n");
	for(k=0;k<n;k++)
		printf("%d ",a[k]);
	}
	//printf("\nc1=%d c2=%d c3=%d",c1,c2,c3);	
	printf("\n Array values AFTER sorting\n");
	for(i=0;i<n;i++)
		printf("%d ",a[i]);
	return 0;
}
