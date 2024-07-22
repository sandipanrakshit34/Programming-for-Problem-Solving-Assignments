#include<stdio.h>
int main(){
	int a[20];
	int i,j,n,temp;
	int flag=1;
	//static int c1,c2,c3;
	
	printf("\n How many values u12 enter in the array:\n");
	scanf("%d",&n);
	
	printf("\n Enter %d element values in the array",n);
	for(i=0;i<n;i++)
		scanf("%d",&a[i]);
		
	printf("\n array elements BEFORE SORTING\n");
	for(i=0;i<n;i++)
		printf("%d ",a[i]);
	
	for(i=0;i<n-1 && flag>0;i++){
		//++c1;
		flag=0;
		for(j=0;j<n-i-1;j++){
			//++c2;
			if(a[j]>a[j+1]){
				//++c3;
				temp=a[j];
				a[j]=a[j+1];
				a[j+1]=temp;
				flag=1;
			}
			
		}
		//printf("\n c1=%d c2=%d c3=%d",c1,c2,c3);
		//if(flag==0)
		//	break;
		
	}
	//printf("\n c1=%d c2=%d c3=%d",c1,c2,c3);
	printf("\n array elements AFTER SORTING\n");
	for(i=0;i<n;i++)
		printf("%d ",a[i]);	
	
	return 0;
}
