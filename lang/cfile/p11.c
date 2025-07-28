
#include <stdio.h>

void reverseInput(char c) {
    if (c != '\n') {
        reverseInput(getchar());
    }
    printf("%c", c);
}

int main() {
    printf("Enter a sequence of characters: ");
    reverseInput(getchar());
    printf("\n");
    return 0;
}

