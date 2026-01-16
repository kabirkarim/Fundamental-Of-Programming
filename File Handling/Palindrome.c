#include <stdio.h>
#include <string.h>
int main() {
    FILE *fp;
    char word[100], rev[100];
    int i, len, flag = 1;

    // Open file
    fp = fopen("data.txt", "r");

    if (fp == NULL) {
        printf("File not found!\n");
        return 0;
    }

    // Read word from file
    fscanf(fp, "%s", word);
    fclose(fp);

    len = strlen(word);

    // Reverse the word
    for (i = 0; i < len; i++) {
        rev[i] = word[len - i - 1];
    }
    rev[i] = '\0';

    // Compare
    for (i = 0; i < len; i++) {
        if (word[i] != rev[i]) {
            flag = 0;
            break;
        }
    }

    // Output
    if (flag == 1)
        printf("'%s' is a Palindrome\n", word);
    else
        printf("'%s' is NOT a Palindrome\n", word);

    return 0;
}
