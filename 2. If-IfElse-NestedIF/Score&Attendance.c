#include <stdio.h>

int main() {
    float score, atten;

    printf("Enter your Score: ");
    scanf("%f", &score);

    printf("Enter your Attendance (in %): ");
    scanf("%f", &atten);

    // Check valid input
    if ((score >= 0 && score <= 100) && (atten >= 0 && atten <= 100)) {
        if (score >= 90 && atten >= 90) {
            printf("Grade A\n");
        }
        else if (score >= 80 && atten >= 80) {
            printf("Grade B\n");
        }
        else if (score >= 70 && atten >= 70) {
            printf("Grade C\n");
        }
        else if (score >= 60 && atten >= 60) {
            printf("Grade D\n");
        }
        else {
            printf("Grade F\n");
        }
    } 
    else {
        printf("Invalid input\n");
    }

    return 0;
}
