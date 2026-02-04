#include <stdio.h>

struct Employee {
    char name[50];
    int empID;
    float salary;
};

int main() {
    struct Employee e[3];
    float totalSalary = 0;
    int i;

    for(i = 0; i < 3; i++) {
        printf("\nEnter details of employee %d\n", i+1);
        printf("Name: ");
        // scanf("%s", e[i].name);
        gets(e[i].name);
        printf("Employee ID: ");
        scanf("%d", &e[i].empID);
        printf("Salary: ");
        scanf("%f", &e[i].salary);
        getchar();
        totalSalary += e[i].salary;
    }

    printf("\nTotal Salary of all employees = %.2f\n", totalSalary);
    return 0;
}
