#include <stdio.h>
#include <stdlib.h>

// Structure for a binary tree node
struct Node {
    int data;
    struct Node* left;
    struct Node* right;
};

// Function to create a new node
struct Node* createNode(int item) {
    struct Node* temp = (struct Node*)malloc(sizeof(struct Node));
    temp->data = item;
    temp->left = temp->right = NULL;
    return temp;
}

// Function to insert a node into the binary tree
struct Node* insert(struct Node* root, int key) {
    if (root == NULL)
        return createNode(key);

    if (key < root->data)
        root->left = insert(root->left, key);
    else if (key > root->data)
        root->right = insert(root->right, key);

    return root;
}

// Function to perform an inorder traversal of the binary tree
void inorder(struct Node* root, int* arr, int* index) {
    if (root != NULL) {
        inorder(root->left, arr, index);
        arr[(*index)++] = root->data;
        inorder(root->right, arr, index);
    }
}

// Function to sort the array using Tree Sort
void treeSort(int arr[], int n) {
    struct Node* root = NULL;

    // Construct the binary tree
    for (int i = 0; i < n; i++)
        root = insert(root, arr[i]);

    int index = 0;

    // Perform an inorder traversal to get the sorted array
    inorder(root, arr, &index);
}

// Function to print an array
void printArray(int arr[], int n) {
    for (int i = 0; i < n; i++)
        printf("%d ", arr[i]);
    printf("\n");
}

// Main function
int main() {
    int arr[100], n;

    printf("Enter the number of elements: ");
    scanf("%d", &n);

    printf("Enter the elements: ");
    for (int i = 0; i < n; i++)
        scanf("%d", &arr[i]);

    printf("Original array: ");
    printArray(arr, n);

    treeSort(arr, n);

    printf("Sorted array: ");
    printArray(arr, n);

    return 0;
}
