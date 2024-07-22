#include<stdio.h>
int main() {
	int i,j,key,n,a[10];
	printf("enter the size of the array: ");
	scanf("%d",&n);
	printf("enter the elements of the array: ");
	for(i=0;i<n;i++)
	scanf("%d",&a[i]);
	for(i=1;i<n;i++) {
		key=a[i];
		j=j-1;
		while(j>=0 && a[j]>key) {
			a[j+1]=a[j];
			j++;
		}
		a[j+1]=key;
	}
	printf("the sorted array is: ");
	for(i=0;i<n;i++) {
		printf("%d",a[i]);
	}
	return 0;
}
