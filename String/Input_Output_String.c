#include <stdio.h>

int main() {
    char str1[50], str2[50];

    printf("Enter a word (scanf): ");
    scanf("%s", str1);

    printf("Enter a sentence (gets): ");
    getchar();          // clear buffer
    gets(str2);

    printf("\nUsing printf:\n");
    printf("%s\n", str1);
    printf("%s\n", str2);

    printf("\nUsing puts:\n");
    puts(str1);
    puts(str2);

    return 0;
}
