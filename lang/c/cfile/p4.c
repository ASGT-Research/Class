	
#include <stdio.h>
#include <math.h>
#include <string.h>

// Function to convert binary to decimal
int binaryToDecimal(char binary[]) {
    int decimal = 0, base = 1;
    int len = strlen(binary);

    for (int i = len - 1; i >= 0; i--) {
        if (binary[i] == '1') {
            decimal += base;
        }
        base *= 2;
    }

    return decimal;
}

// Function to convert decimal to binary
void decimalToBinary(int decimal) {
    int binary[32];
    int i = 0;

    while (decimal > 0) {
        binary[i++] = decimal % 2;
        decimal /= 2;
    }

    printf("Binary: ");
    for (int j = i - 1; j >= 0; j--) {
        printf("%d", binary[j]);
    }
    printf("\n");
}

int main() {
    int choice;
    char binary[32];
    int decimal;

    printf("Binary-Decimal Converter\n");
    printf("1. Binary to Decimal\n");
    printf("2. Decimal to Binary\n");
    printf("Enter your choice (1-2): ");
    scanf("%d", &choice);

    switch (choice) {
        case 1:
            printf("Enter binary number: ");
            scanf("%s", binary);
            printf("Decimal: %d\n", binaryToDecimal(binary));
            break;
        case 2:
            printf("Enter decimal number: ");
            scanf("%d", &decimal);
            decimalToBinary(decimal);
            break;
        default:
            printf("Invalid choice.\n");
            break;
    }

    return 0;
}

