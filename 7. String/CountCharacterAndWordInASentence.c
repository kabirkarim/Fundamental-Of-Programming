#include <stdio.h>

int main() {
    char str[100];
    int chars = 0, words = 1;

    printf("Enter a sentence: ");
    gets(str);

    for(int i = 0; str[i] != '\0'; i++) {
        chars++;
        if(str[i] == ' ')
            words++;
    }

    printf("Characters = %d\n", chars);
    printf("Words = %d\n", words);

    return 0;
}
