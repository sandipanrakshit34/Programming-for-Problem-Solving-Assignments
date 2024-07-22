#include<stdio.h>
int binary_search(int array[25],int size,int target) {
	int low=0;
	int high=size-1;
	while(low<=high) {
		int mid=(low+high)/2;
		if(array[mid]==target) {
			return mid;
		}
		else if(array[mid]<target) {
			low=mid+1;
		}
		else {
			high=mid-1;
		}
	}
	return -1;
}
int main() {
	int array[25],i,size;
	int target;
	printf("enter the size of the array:\n");
	scanf("%d",&size);
	printf("enter the elements of the array:\n");
	for(i=0;i<size;i++)
	scanf("%d",&array[i]);
	printf("enter target: \n");
	scanf("%d",&target);
	int index = binary_search(array,size,target);
	if(index==-1) {
		printf("element not found\n");
	}
	else {
		printf("element fount at index %d\n",index);
	}
	return 0;	
}