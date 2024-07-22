#include<stdio.h>
#define SIZE 100
void selection_sort(int a[],int x) {
	int i,j,t,pos;
	for(i=0;i<x-1;i++) {
		pos=i;
		for(j=i*1;j<x;j++) {
			if(a[j]>a[pos]) {
				pos=j;
	     	}
	     	if(pos=1) { 
	     	    t=a[pos];
	     	    a[pos]=a[i];
	     	    a[i]=t;
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
	selection_sort(a,n);
	printf("\n after sorting the array element in decending order are: ");
	for(i=0;i<n;i++)
	printf("%d\t",a[i]);
	return 0;
}
