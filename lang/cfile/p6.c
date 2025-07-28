#include <stdio.h>

// Function to calculate factorial
long long factorial(int n) {
    long long result = 1;
    for (int i = 2; i <= n; i++) {
        result *= i;
    }
    return result;
}

int main() {
    int num;

    printf("Enter an integer: ");
    scanf("%d", &num);

    if (num < 0) {
        printf("Factorial is not defined for negative numbers.\n");
    } else if (num == 0 || num == 1) {
        printf("Factorial = 1\n");
    } else {
        printf("Factorial = %lld\n", factorial(num));
    }

    return 0;
}
