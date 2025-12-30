#include <stdio.h>

/* Function to multiply two integers */
int multiply(int a, int b) {
    return a * b;
}

int main() {
    int num1, num2, result;

    /* Taking input from user */
    printf("Enter two integers: ");
    scanf("%d %d", &num1, &num2);

    /* Calling the multiply function */
    result = multiply(num1, num2);

    /* Printing the result */
    printf("Product = %d\n", result);

    return 0;
}
