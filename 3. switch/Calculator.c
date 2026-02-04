#include <stdio.h> 

int main() {
    int option, subOption;
    float value, result;

    printf("This is a Conversion Calculator\n");
    printf("Select Option Which Conversion Calculation You Want To Do: \n");
    printf("1 = Length \n2 = Temperature\n");
    printf("Choose An Option: ");
    scanf("%d", &option);

    if (option == 1) {
        printf("Select Option To Convert The Length:\n");
        printf("1 - Cm to M \n2 - M to Cm\n");
        printf("Choose An Option: ");
        scanf("%d", &subOption);

        switch (subOption) {
            case 1:
                printf("Enter the length in Cm: ");
                scanf("%f", &value);
                result = value / 100.0;
                printf("%.2f cm = %.2f m\n", value, result);
                break;
            case 2:
                printf("Enter the length in M: ");
                scanf("%f", &value);
                result = value * 100.0;
                printf("%.2f m = %.2f cm\n", value, result);
                break;
            default:
                printf("Invalid Input\n");
                break;
        }
    }
    else if(option == 2) {
        printf("Select Option To Convert The Temperature:\n");
        printf("1 - Fahrenheit to Celsius \n2 - Celsius to Fahrenheit\n");
        printf("Choose An Option: ");
        scanf("%d", &subOption);

        switch (subOption) {
            case 1:
                printf("Enter the temperature in Fahrenheit: ");
                scanf("%f", &value);
                result = (value - 32) * (5.0/9);
                printf("%.2f F = %.2f C\n", value, result);
                break;
            case 2:
                printf("Enter the temperature in Celsius: ");
                scanf("%f", &value);
                result = (value * 9.0/5) + 32;
                printf("%.2f C = %.2f F\n", value, result);
                break;
            default:
                printf("Invalid Input\n");
                break;
        }
    }
    else {
        printf("Invalid Choice!\n");
    }

    return 0;
}
