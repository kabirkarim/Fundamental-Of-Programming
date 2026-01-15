#include <stdio.h>
int main() {
    char str[100];
    char *ptr;
    int count = 0;
    printf("Enter a string: ");
    fgets(str, sizeof(str), stdin);
    ptr = str;
        while (*ptr != '\0') {  // Loop runs until  null character 
        // Check if the current character is a vowel
        if (*ptr == 'a' || *ptr == 'e' || *ptr == 'i' || *ptr == 'o' || *ptr == 'u' ||
            *ptr == 'A' || *ptr == 'E' || *ptr == 'I' || *ptr == 'O' || *ptr == 'U') {
            count++;  // Increase count if a vowel is found
        }

        ptr++;//to move on next characterindex   
        }
    printf("Number of vowels: %d\n", count);
    return 0;
}

