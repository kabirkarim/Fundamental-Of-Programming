// Develop a C program that copies the contents of one file (e.g., "source.txt") to another file (e.g., "destination.txt"). Ensure that the program works correctly with files of different sizes.
#include <stdio.h>
int main() {
    FILE *sourceFile, *destFile;
    char ch;

    // Open source file in read mode
    sourceFile = fopen("source.txt", "r");
    if (sourceFile == NULL) {
        printf("Error: Cannot open source file.\n");
        return 1;
    }

    // Open destination file in write mode
    destFile = fopen("destination.txt", "w");
    if (destFile == NULL) {
        printf("Error: Cannot open destination file.\n");
        fclose(sourceFile);
        return 1;
    }

    // Copy contents character by character
    while ((ch = fgetc(sourceFile)) != EOF) {
        fputc(ch, destFile);
    }

    fclose(sourceFile);
    fclose(destFile);

    printf("File copied successfully.\n");

    return 0;
}