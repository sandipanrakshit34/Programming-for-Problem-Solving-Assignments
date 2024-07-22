#include<stdio.h>
#define MAX_SIZE 100

void displayArray(int arr[], int size) {
    for (int i = 0; i < size; i++) {
        printf("%d ", arr[i]);
    }
}
int insertElement(int arr[], int size, int index, int element) {
    for (int i = size - 1; i >= index; i--) {
        arr[i + 1] = arr[i];
    }
    arr[index] = element;
    return size + 1;
}

int main() {
    int array[MAX_SIZE];
    int i,size, index, element;
    printf("Enter the size of the array(upto %d): ", MAX_SIZE);
    scanf("%d",&size);
    printf("Enter the elements:\n");
    for(i=0;i<size;i++){
        scanf("%d",&array[i]);
    }
    printf("Array elements: ");
    displayArray(array, size);

    printf("\nEnter the index where you want add the element:\n ");
    scanf("%d",&index);
    if(index <= 0 || index >= size) {
        printf("invalid index\n");
    }
    else {
        printf("Enter the element to be inserted: ");
        scanf("%d", &element);
        size = insertElement(array, size, index, element);
        printf("\nArray elements after insertion: ");
        displayArray(array, size);
    }
return 0;
}
