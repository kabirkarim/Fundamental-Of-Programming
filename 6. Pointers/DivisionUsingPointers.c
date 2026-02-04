#include <stdio.h>

int main() {
    int a, b;
    float result;
    int *p1, *p2;

    printf("Enter two numbers: ");
    scanf("%d %d", &a, &b);

    p1 = &a;
    p2 = &b;

    if(*p2 != 0) {
        result = (float)(*p1) / (*p2);
        printf("Division = %.2f\n", result);
    } else {
        printf("Division by zero not allowed\n");
    }

    return 0;
}
