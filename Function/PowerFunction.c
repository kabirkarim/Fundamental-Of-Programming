#include <stdio.h>

/* Function to calculate power */
int power(int base, int exponent) {
    int result = 1;

    for(int i = 1; i <= exponent; i++) {
        result = result * base;
    }

    return result;
}

int main() {
    int base, exponent, result;

    /* Taking input */
    printf("Enter base: ");
    scanf("%d", &base);

    printf("Enter exponent: ");
    scanf("%d", &exponent);

    /* Calling power function */
    result = power(base, exponent);

    /* Printing result */
    printf("Result = %d\n", result);

    return 0;
}
