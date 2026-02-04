#include <stdio.h>

int main() {
    float a, b, c;
    
    printf("Enter 1st angle: ");
    scanf("%f", &a);
    
    printf("Enter 2nd angle: ");
    scanf("%f", &b);
    
    printf("Enter 3rd angle: ");
    scanf("%f", &c);
    
    float sum = a + b + c;

    if (sum == 180) {
        if (a == b && b == c) {   
            printf("Equilateral Triangle\n");
        }
        else if (a == b || b == c || a == c) {
            printf("Isosceles Triangle\n");
        }
        else if (a == 90 || b == 90 || c == 90) {
            printf("Right Triangle\n");
        }
        else {
            printf("Scalene Triangle\n");
        }
    } else {
        printf("Not a Triangle\n");
    }

    return 0;
}
