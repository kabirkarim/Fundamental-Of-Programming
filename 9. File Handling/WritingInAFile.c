// Write a C program that takes user input for a name and age and writes this information to a file named "userData.txt". Ensure that the program can handle multiple entries and appends each new entry to the file.
#include <stdio.h>
int main() {
    FILE *fp;
    char name[50];
    int age;
    char choice;
    
    // Open file in append mode
    fp = fopen("userData.txt", "a");

    if (fp == NULL) {
        printf("Error opening file.\n");
        return 1;
    }

    do {
        printf("Enter name: ");
        scanf(" %[^\n]", name);   // reads full name with spaces

        printf("Enter age: ");
        scanf("%d", &age);

        // Write to file
        fprintf(fp, "Name: %s, Age: %d\n", name, age);

        printf("Do you want to add another entry? (y/n): ");
        scanf(" %c", &choice);

    } while (choice == 'y' || choice == 'Y');

    fclose(fp);

    printf("Data saved successfully in userData.txt\n");

    return 0;
}
