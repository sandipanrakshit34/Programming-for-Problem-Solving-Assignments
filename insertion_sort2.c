#include<stdio.h>
void insertion_sort(int arr[],int n) {
    int i,j,current;
    for(i=1;i<n;i++) {
        current = arr[i];
        for(j=i-1;j>=0 && arr[j]<current;j--) {
            arr[j+1] = arr[j];
        }
        arr[j+1] = current;
    }
}
int main() {
	int arr[20],n,i;
	printf("enter the size of array:\n");
	scanf("%d",&n);
	printf("enter the elements of array:\n");              //Decending order
	for(i=0;i<n;i++)
	scanf("%d",&arr[i]);
	printf("the array before sorting is:\n");
	for(i=0;i<n;i++)
	printf("%d\t",arr[i]);
	printf("\nthe array after sorting is:\n");
	insertion_sort(arr,n);
	for(i=0;i<n;i++)
	printf("%d\t",arr[i]);
	return 0;
}