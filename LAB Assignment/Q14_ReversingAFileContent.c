// Read a text file and print its contents in reverse order (character by character)
#include <stdio.h>
#include <string.h>
int main() {
    FILE *fp; // file pointer
    char str[100]; //for saving content in string
    int i = 0; //for loop control
    int ch;
    fp = fopen("D:\\Fundamental Of Programming\\LAB Assignment\\Text.txt", "r");
    if (fp == NULL) { // cheaking that file open or not
        printf("Cannot open file");
        return 0;
    }
    printf("The content of the file is: ");
    while ((ch = fgetc(fp)) != EOF) { // raed till end of file
        str[i] = ch;
        i++;
        printf("%c", ch);   // printing original content
    }
    str[i] = '\0';  // null terminate string
    fclose(fp);
    printf("\nThe reversed content is: ");
    for (int j = strlen(str) - 1; j >= 0; j--) {    //printing in reversed order
        printf("%c", str[j]);
    }
    return 0;
}