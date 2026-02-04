#include <stdio.h>

int main() {
    float height, weight, bmi;

    // Input height and weight
    printf("Enter your height in meters: ");
    scanf("%f", &height);

    printf("Enter your weight in kilograms: ");
    scanf("%f", &weight);

    // Calculate BMI
    bmi = weight / (height * height);

    // Print BMI value
    printf("Your BMI is: %.2f\n", bmi);

    // Determine BMI category
    if (bmi < 18.5) {
        printf("You are Underweight.\n");
    } 
    else if (bmi >= 18.5 && bmi < 25) {
        printf("You have Normal Weight.\n");
    } 
    else if (bmi >= 25 && bmi < 30) {
        printf("You are Overweight.\n");
    } 
    else {  // bmi >= 30
        printf("You are Obese.\n");
    }

    return 0;
}
