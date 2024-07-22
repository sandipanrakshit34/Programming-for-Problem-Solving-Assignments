#include <stdio.h>
#define MAX_SIZE 100

void displayArray(int arr[], int size) {
    for (int i = 0; i < size; i++) {
        printf("%d ", arr[i]);
    }
}
int deleteElement(int arr[], int size, int index) {
    for (int i = index; i < size - 1; i++) {
        arr[i] = arr[i + 1];
    }
    return size - 1;
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

    printf("\nEnter the index of the element you want to delete: ");
                scanf("%d", &index);
                if (index < 0 || index >= size) {
                    printf("Invalid index. Index should be between 0 and %d.\n", size - 1);
                } else {
                    size = deleteElement(array, size, index);
                    printf("\nArray elements after deletion: ");
                    displayArray(array, size);
                }
return 0;
}