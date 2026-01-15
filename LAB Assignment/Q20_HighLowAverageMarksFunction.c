// Q20: Using arrays, pointers, and functions, input student marks and find highest, lowest, and average marks.
#include <stdio.h>
// Function to find highest mark
int findHighest(int *marks, int n) {
    int highest = *marks;  // Initialize with first element
    for(int i = 1; i < n; i++) {
        if (*(marks + i) > highest)
            highest = *(marks + i);
    }
    return highest;
}
// Function to find lowest mark
int findLowest(int *marks, int n) {
    int lowest = *marks;
    for(int i = 1; i < n; i++) {
        if (*(marks + i) < lowest)
            lowest = *(marks + i);
    }
    return lowest;
}
// Function to find average
float findAverage(int *marks, int n) {
    int sum = 0;
    for(int i = 0; i < n; i++) {
        sum += *(marks + i);
    }
    return (float)sum / n;
}
int main() {
    int n;
    
    printf("Enter number of students: ");
    scanf("%d", &n);

    int marks[n];  // Array to store marks
    int *ptr = marks;  // Pointer to array

    // Input marks
    for(int i = 0; i < n; i++) {
        printf("Enter marks of student %d: ", i + 1);
        scanf("%d", ptr + i);  // Using pointer arithmetic
    }

    // Call functions
    int highest = findHighest(ptr, n);
    int lowest = findLowest(ptr, n);
    float average = findAverage(ptr, n);

    // Display results
    printf("\nHighest marks: %d\n", highest);
    printf("Lowest marks: %d\n", lowest);
    printf("Average marks: %.2f\n", average);
    return 0;
}
