l#include <stdio.h>

int main() {
    char c;
    printf("Enter a sequence of characters: ");

    // Store input in an array
    int i = 0;
    char input[100];
    while ((c = getchar()) != '\n' && i < 99) {
        input[i++] = c;
    }
    input[i] = '\0'; // Null-terminate the string

    // Print input in reverse
    printf("\nReversed sequence: ");
    for (int j = i - 1; j >= 0; j--) {
        printf("%c", input[j]);
    }
    printf("\n");
    return 0;
}

