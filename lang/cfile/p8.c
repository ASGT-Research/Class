
#include <stdio.h>

int main() {
    int n; // Number of elements
    printf("Enter the number of elements: ");
    scanf("%d", &n);

    int arr[n]; // Declare array with dynamic size

    // Get user input for array elements
    printf("Enter %d elements:\n", n);
    for (int i = 0; i < n; i++) {
        scanf("%d", &arr[i]);
    }

    // Initialize max value and count
    int max_val = arr[0];
    int count = 1;

    // Find max value and count occurrences
    for (int i = 1; i < n; i++) {
        if (arr[i] > max_val) {
            max_val = arr[i];
            count = 1;
        } else if (arr[i] == max_val) {
            count++;
        }
    }

    // Print results
    printf("Maximum value: %d\n", max_val);
    printf("Occurrences: %d\n", count);

    return 0;
}

