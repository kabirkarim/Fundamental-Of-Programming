// Create a program that reads and prints the contents of the "userData.txt" file created in the previous question. Display the name and age of each entry.
#include <stdio.h>

int main() {
    FILE *fp;
    char line[100];

    // Open file in read mode
    fp = fopen("userData.txt", "r");

    if (fp == NULL) {
        printf("Error: File not found.\n");
        return 1;
    }

    printf("Contents of userData.txt:\n\n");

    // Read file line by line
    while (fgets(line, sizeof(line), fp) != NULL) {
        printf("%s", line);
    }

    fclose(fp);

    return 0;
}
