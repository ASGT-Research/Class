
#include <stdio.h>

// Function to perform linear search
int linearSearch(int arr[], int n, int target) {
    for (int i = 0; i < n; i++) {
        if (arr[i] == target) {
            return i;  // Return index if target found
        }
    }
    return -1;  // Return -1 if target not found
}

int main() {
    int n, target;

    // Get the number of elements
    printf("Enter the number of elements: ");
    scanf("%d", &n);

    int arr[n];

    // Input array elements
    printf("Enter %d elements:\n", n);
    for (int i = 0; i < n; i++) {
        scanf("%d", &arr[i]);
    }

    // Input target element
    printf("Enter the target element: ");
    scanf("%d", &target);

    int result = linearSearch(arr, n, target);

    if (result == -1) {
        printf("Target element not found in the array.\n");
    } else {
        printf("Target element found at index %d.\n", result);
    }

    return 0;}
