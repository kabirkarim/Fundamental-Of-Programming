#include <stdio.h>

int main() {
    int ali, hamza, basit;

    printf("Enter Ali's age: ");
    scanf("%d", &ali);

    printf("Enter Hamza's age: ");
    scanf("%d", &hamza);

    printf("Enter Basit's age: ");
    scanf("%d", &basit);

    if (ali < hamza && ali < basit) {
        printf("Ali is the youngest.");
    }
    else if (hamza < ali && hamza < basit) {
        printf("Hamza is the youngest.");
    }
    else if (basit < ali && basit < hamza) {
        printf("Basit is the youngest.");
    }
    else {
        printf("Two or more have the same age.");
    }

    return 0;
}
