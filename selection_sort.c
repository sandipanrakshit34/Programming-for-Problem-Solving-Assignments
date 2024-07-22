#include<stdio.h>
void selection_sort(int arr[],int n) {
    int i,j,temp,min_index;
	for(i=0;i<n-1;i++) {
		min_index=i;
		for(j=i+1;j<n;j++) {
			if(arr[j]<arr[min_index]) {
				min_index=j;
			}
		}
		temp=arr[i];
		arr[i] =arr[min_index];                                    //assending order
		arr[min_index]=temp;
	}
}
int main() {
	int arr[50],n,i;
	printf("enter the size of array:\n");
	scanf("%d",&n);
	printf("enter the elements of array:\n");
	for(i=0;i<n;i++)
	scanf("%d",&arr[i]);
	printf("the array before sorting is:\n");
	for(i=0;i<n;i++)
	printf("%d\t",arr[i]);
	selection_sort(arr,n);
	printf("the array after sorting is:\n");
	for(i=0;i<n;i++)
	printf("%d\t",arr[i]);
	return 0;
}
