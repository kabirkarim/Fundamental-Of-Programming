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
    fclose(fp); // closing the file
   
    for(int i = 0; word[i] != '\0'; i++) { //For case Sensative
        //converting all Alphabet to upper case
        if(word[i] >= 'a' && word[i] <= 'z')
            word[i] = word[i] - 32; 
    }
    len=strlen(word);
    for (i = 0; word[i] != '\0'; i++) {     // For Cheacking Palindrome 
        if (word[i] != word[len - i - 1]) { //if the word doesn't match the its reverse 
            printf("'%s' is NOT a Palindrome\n", word); // Then word will is not a pelindrome
            return 0; // end the program
        }
    }
    printf("'%s' is a Palindrome\n", word); // If the loop is completed and no if condition is applied Then Word Will be palindrome
    return 0;
}