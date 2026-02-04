#include <stdio.h>

int main() {
    int year;
    int isLeap;

    printf("Enter a year: ");
    scanf("%d", &year);

    // Calculate leap year condition
    if ((year % 400 == 0) || (year % 4 == 0 && year % 100 != 0)) {
        isLeap = 1;  // Leap year
    } else {
        isLeap = 0;  // Not a leap year
    }

    // Use switch-case to print result
    switch(isLeap) {
        case 1:
            printf("%d is a Leap Year.\n", year);
            break;
        case 0:
            printf("%d is NOT a Leap Year.\n", year);
            break;
    }

    return 0;
}
