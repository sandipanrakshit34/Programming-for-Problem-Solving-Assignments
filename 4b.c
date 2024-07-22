#include<stdio.h>
int main(){
	int a[20];
	int i,n,x,flag=0;
	printf("\n How many values u12 enter in the array:");
	scanf("%d",&n);
	printf("\n Enter %d element values in the array",n);
	for(i=0;i<n;i++)
		scanf("%d",&a[i]);
	printf("\n Enter the value to be searched:");
	scanf("%d",&x);	
	for(i=0;i<n;i++){
		if(a[i]==x){
			flag=1;
			//printf("value %d is present in the array in position %d",x,i+1);
			break;
		}			
	}
	//if(i==n)
	if(flag==0)
		printf("value %d is not present in the array",x);
	else
		printf("value %d is present in the array in position %d",x,i+1);
	
	return 0;
}
