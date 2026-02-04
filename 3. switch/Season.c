#include <stdio.h>

int main() {
    int month, season;

    printf("Enter month number (1-12): ");
    scanf("%d", &month);

    if (month < 1 || month > 12) {
        printf("Invalid input! Please enter a number between 1 and 12.\n");
        return 0;
    }

    // Convert month to season using expression
    season = ((month -1) / 3) + 1;
    // season=month-1/3;

    // Switch with 4 cases
    switch (season) {
        case 1:
            printf("Winter\n");
            break;
        case 2:
            printf("Spring\n");
            break;
        case 3:
            printf("Summer\n");
            break;
        case 4:
            printf("Fall\n");
            break;
        default:
            printf("Invalid input!\n"); // This won't happen now
            break;
    }

    return 0;
}
