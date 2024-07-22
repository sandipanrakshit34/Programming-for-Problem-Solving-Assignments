#include <stdio.h>
#define MAX_SIZE 100

void displayArray(int arr[], int size) {
    for (int i = 0; i < size; i++) {
        printf("%d ", arr[i]);
    }
}
int replaceElement(int arr[], int size, int index, int element) {
    arr[index] = element;
    return size;
}

int main() {
    int array[MAX_SIZE];
    int size, index, element;

    printf("Enter the size of the array (up to %d): ", MAX_SIZE);
    scanf("%d", &size);
    printf("Enter the elements of the array:\n");
    for (int i = 0; i < size; i++) {
        scanf("%d", &array[i]);
    }
    printf("\nArray elements: ");
    displayArray(array, size);

    printf("Enter the index where you want to replace the element: ");
                scanf("%d", &index);
                if (index < 0 || index >= size) {
                    printf("Invalid index. Index should be between 0 and %d.\n", size - 1);
                } else {
                    printf("Enter the element to be replaced: ");
                    scanf("%d", &element);
                    size = replaceElement(array, size, index, element);
                    printf("\nArray elements after replacement: ");
                    displayArray(array, size);
                }
return 0;
}
