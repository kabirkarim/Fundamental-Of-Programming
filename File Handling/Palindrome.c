#include <stdio.h>
#include <string.h>
int main() {
    FILE *fp;
    char word[100];
    int i, len;    
    fp = fopen("data.txt", "r"); // Open file
    if (fp == NULL) {   // Checking that file found or not
        printf("File not found!\n");
        return 0;
    }   
    fscanf(fp, "%s", word); // Read word from file
    fclose(fp);
   
    for(int i = 0; word[i] != '\0'; i++) { 
        if(word[i] >= 'a' && word[i] <= 'z')
            word[i] = word[i] - 32;
    }
    len=strlen(word);
    for (i = 0; word[i] != '\0'; i++) {
        if (word[i] != word[len - i - 1]) {
            printf("'%s' is NOT a Palindrome\n", word);
            return 0;
        }
    }
    printf("'%s' is a Palindrome\n", word);
    return 0;
}