#include <stdio.h>

// Function to perform Shell sort
void shellSort(int arr[], int n) {
    // Start with a large gap, and reduce it in each iteration
    for (int gap = n / 2; gap > 0; gap /= 2) {
        // Perform insertion sort on subarrays defined by the gap
        for (int i = gap; i < n; i++) {
            int temp = arr[i];
            int j;

            // Shift elements in the subarray to their correct positions
            for (j = i; j >= gap && arr[j - gap] > temp; j -= gap) {
                arr[j] = arr[j - gap];
            }

            // Place the current element at its correct position
            arr[j] = temp;
        }
    }
}

int main() {
    int n;

    printf("Enter the number of elements: ");
    scanf("%d", &n);

    int arr[n];

    printf("Enter %d elements:\n", n);
    for (int i = 0; i < n; i++) {
        scanf("%d", &arr[i]);
    }

    shellSort(arr, n);

    printf("Sorted array: ");
    for (int i = 0; i < n; i++) {
        printf("%d ", arr[i]);
    }
    printf("\n");

    return 0;
}
