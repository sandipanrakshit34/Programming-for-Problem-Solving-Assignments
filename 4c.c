#include<stdio.h>
int main(){
	int a[20];
	int i,n,x,mid,f,l;
	
	printf("\n How many values u12 enter in the array:");
	scanf("%d",&n);
	
	printf("\n Enter %d element values in the array",n);
	for(i=0;i<n;i++)
		scanf("%d",&a[i]);
		
	printf("\n Enter the value to be searched:");
	scanf("%d",&x);	
	f=0;
	l=n-1;
	mid=(f+l)/2;
	
	while(f<=l){
		
		if(a[mid]<x)
			//f=mid+1;
			l=mid-1;
			
		else if(a[mid]==x){
			printf("value %d is present in the array in position %d \n",x,mid+1);
			break;
		}
		else
			//l=mid-1;
			f=mid+1;
			
		mid=(f+l)/2;			
	}
	if(f>l)
		printf("value %d is not present in the array",x);
	return 0;
}
