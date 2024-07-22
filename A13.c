#include<stdio.h>
#define SIZE 100
void bubble_sort(int arr[],int x) {
	int i,j,t;
	for(i=0;i<x-1;i++) {
		for(j=0;j<x-i-1;j++) {
			if(arr[j]>arr[j+1]) {
				t=arr[j];
				arr[j]=arr[j+1];
				arr[j+1]=t;
			}
		}
	}
}
int main() {
	int i,j,n,a[SIZE],t;
	printf("enter the value of n: ");
	scanf("%d",&n);
	printf("\n enter the %d values in the array: ",n);
	for(i=0;i<n;i++)
	scanf("%d",&a[i]);
	printf("\n before sorting array elements are: ");
	for(i=0;i<n;i++)
	printf("%d\t",a[i]);
	bubble_sort(a,n);
	printf("\n after sorting the array element in acending order are: ");
	for(i=0;i<n;i++)
	printf("%d\t",a[i]);
	return 0;
}
