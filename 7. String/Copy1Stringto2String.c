#include <stdio.h>

int main() {
    char str1[50], str2[50];
    int i;

    printf("Enter string: ");
    gets(str1);

    for(i = 0; str1[i] != '\0'; i++)
        str2[i] = str1[i];

    str2[i] = '\0';

    printf("Copied string: %s\n", str2);
    return 0;
}

//Method --> 2
// #include <stdio.h>
// #include <string.h>

// int main() {
//     char str1[50], str2[50];

//     printf("Enter string: ");
//     gets(str1);

//     strcpy(str2, str1);

//     printf("Copied string: %s\n", str2);
//     return 0;
// }
