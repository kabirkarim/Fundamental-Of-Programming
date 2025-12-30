#include <stdio.h>

int main() {
    char maritalStatus;
    char gender;
    int age;

    printf("Enter marital status (M for married, U for unmarried): ");
    scanf(" %c", &maritalStatus);

    printf("Enter gender (M for male, F for female): ");
    scanf(" %c", &gender);

    printf("Enter age: ");
    scanf("%d", &age);

    if (maritalStatus == 'M' || maritalStatus == 'm') {
        // Married driver
        printf("Driver is insured.\n");
    } 
    else if (maritalStatus == 'U' || maritalStatus == 'u') {
        // Unmarried driver, need gender and age
       
        if ((gender == 'M' || gender == 'm') && age > 30) {
            printf("Driver is insured.\n");
        } 
        else if ((gender == 'F' || gender == 'f') && age > 25) {
            printf("Driver is insured.\n");
        } 
        else {
            printf("Driver is NOT insured.\n");
        }
    } 
    else {
        printf("Invalid input.\n");
    }

    return 0;
}
