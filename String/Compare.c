#include <stdio.h>
int main() {
    char s1[50], s2[50];
    int i = 0, flag = 1;
    printf("Enter first string: ");
    fgets(s1, 50, stdin);
    printf("Enter second string: ");
    fgets(s2, 50, stdin);
    while (s1[i] != '\0' && s2[i] != '\0') {    // Loop will run until the string have character
        // If any character does not match, strings are not equal
        if (s1[i] != s2[i]) {
            flag = 0;
            break;
        }
        i++;  // Move to next character index
    }
    // After loop, check if both strings ended at the same time
    // If one string is longer, they are not equal
    if (s1[i] != '\0' || s2[i] != '\0')
        flag = 0;
    if (flag == 1)
        printf("Strings are equal");
    else
        printf("Strings are not equal");
    return 0;
}
