#include <stdio.h>

int main() {
    int score;
    char grade;

    printf("Enter your test score (0-100): ");
    scanf("%d", &score);

    if (score < 0 || score > 100) {
        printf("Invalid score! Enter a number between 0 and 100.\n");
        return 0;
    }

    // Convert score to tens for switch-case (e.g., 90-100 → 9 or 10)
    switch(score / 10) {
        case 10: // for score 100
        case 9:
            grade = 'A';
            break;
        case 8:
            grade = 'B';
            break;
        case 7:
            grade = 'C';
            break;
        case 6:
            grade = 'D';
            break;
        default:
            grade = 'F';
            break;
    }

    printf("Your grade is: %c\n", grade);

    return 0;
}
