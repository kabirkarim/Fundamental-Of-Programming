#include <stdio.h>

struct Student {
    char name[50];
    int rollNo;
    float marks;
};

int main() {
    struct Student s[2];
    int i;

    for(i = 0; i <2; i++) {
        printf("\nEnter details of student %d\n", i+1);

        printf("Name: ");
        // scanf("%[^\n]", s[i].name);

            
            fgets(s[i].name, sizeof(s[i].name), stdin);
            // gets(s[i].name);

        printf("Roll No: ");
        scanf("%d", &s[i].rollNo);

        printf("Marks: ");
        scanf("%f", &s[i].marks);
          getchar();  // clears leftover newline
    }

    printf("\nStudent Details:\n"); 
    for(i = 0; i < 2; i++) {
        printf("\nName: %s\nRoll No: %d\nMarks: %.2f\n",
               s[i].name, s[i].rollNo, s[i].marks);
    }

    return 0;
}
