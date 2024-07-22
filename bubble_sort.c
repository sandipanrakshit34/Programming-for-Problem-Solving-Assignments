#include<stdio.h>
void bubble_sort(int arr[],int n) {
    int i,j,temp;
	for(i=0;i<n-1;i++) {
		for(j=0;j<n-i-1;j++) {
			if(arr[j]<arr[j+1]) {
				temp=arr[j];
				arr[j]=arr[j+1];
				arr[j+1]=temp;
			}
		}                                            //decending order
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
	bubble_sort(arr,n);
	printf("the array after sorting is:\n");
	for(i=0;i<n;i++)
	printf("%d\t",arr[i]);
	return 0;
}