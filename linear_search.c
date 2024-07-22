#include<stdio.h>
int linear_search(int arr[],int size,int target) {
    int i;
    for(i=0;i<size;i++) {
        if(arr[i] == target) {
            return i;
        }
    }
    return -1;
}
int main() {
    int arr[20],i,size,target;
    printf("enter the size of array: ");
    scanf("%d",&size);
    printf("enter the array elements:");
    for(i=0;i<size;i++)
    scanf("%d",&arr[i]);
    printf("enter the element you want to search: ");
    scanf("%d",&target);
    int index = linear_search(arr,size,target);
    if(index == -1) {
        printf("%d is not in the array\n",target);
    }
    else {
        printf("%d is at %d position in the array\n",target,index);
    }
    return 0;
}