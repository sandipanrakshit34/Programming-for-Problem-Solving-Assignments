#include <stdio.h>
#include <math.h>

int jump_search(int arr[], int n, int target) {
    int step = sqrt(n);
    int prev = 0;
    
    while (arr[min(step, n) - 1] < target) {
        prev = step;
        step += sqrt(n);
        
        if (prev >= n)
            return -1;
    }
    
    while (arr[prev] < target) {
        prev++;
        
        if (prev == fmin(step, n))
            return -1;
    }
    
    if (arr[prev] == target)
        return prev;
    
    return -1;
}

int main() {
    int n, target;

    printf("Enter the size of the array: ");
    scanf("%d", &n);
    
    int arr[n];
    
    printf("Enter the elements of the array in ascending order: ");
    for (int i = 0; i < n; i++)
        scanf("%d", &arr[i]);
    
    printf("Enter the target element to search for: ");
    scanf("%d", &target);
    
    int result = jump_search(arr, n, target);
    
    if (result == -1)
        printf("Element not found in the array.\n");
    else
        printf("Element found at index %d.\n", result);
    
    return 0;
}
#include <stdio.h>
#include <math.h>

int jump_search(int arr[], int n, int target) {
    int step = sqrt(n);
    int prev = 0;
    
    while (arr[min(step, n) - 1] < target) {
        prev = step;
        step += sqrt(n);
        
        if (prev >= n)
            return -1;
    }
    
    while (arr[prev] < target) {
        prev++;
        
        if (prev == fmin(step, n))
            return -1;
    }
    
    if (arr[prev] == target)
        return prev;
    
    return -1;
}

int main() {
    int n, target;

    printf("Enter the size of the array: ");
    scanf("%d", &n);
    
    int arr[n];
    
    printf("Enter the elements of the array in ascending order: ");
    for (int i = 0; i < n; i++)
        scanf("%d", &arr[i]);
    
    printf("Enter the target element to search for: ");
    scanf("%d", &target);
    
    int result = jump_search(arr, n, target);
    
    if (result == -1)
        printf("Element not found in the array.\n");
    else
        printf("Element found at index %d.\n", result);
    
    return 0;
}
