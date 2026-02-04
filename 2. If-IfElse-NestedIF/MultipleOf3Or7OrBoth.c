#include <stdio.h>

int main() {
    int num;

    printf("Enter a number: ");
    scanf("%d", &num);

    if (num % 3 == 0 && num % 7 == 0) {
        printf("%d is a multiple of BOTH 3 and 7.\n", num);
    }
    else if (num % 3 == 0 || num % 7 == 0) {
        // Using OR operator as your teacher asked
        if (num % 3 == 0) {
            printf("%d is a multiple of 3.\n", num);
        } 
        else {
            printf("%d is a multiple of 7.\n", num);
        }
    }
    else {
        printf("%d is not a multiple of 3 or 7.\n", num);
    }

    return 0;
}
