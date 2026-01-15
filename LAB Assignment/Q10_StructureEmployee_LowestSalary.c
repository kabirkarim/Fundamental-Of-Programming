// Q10: Create a structure Employee (ID, Name, Salary). Input 5 employees and display the one with the lowest salary.
#include <stdio.h>
// making a structure Employee
struct Employee {
    int id;
    char name[100];
    float salary;
};
int main() {
    struct Employee e[5];
    int index = 0;
    //Taking Input Details of 5 Employee
    for (int i = 0; i < 5; i++) {
        printf("\nEnter details of Employee %d\n", i + 1);

        printf("Enter Employee ID: ");
        scanf("%d", &e[i].id);

        getchar(); // clear buffer as Scanf Leaves a \n Line AND fgets Take That \n as input

        printf("Enter Employee Name: ");
        fgets(e[i].name, 100, stdin);

        printf("Enter Employee Salary: ");
        scanf("%f", &e[i].salary);
        // finding the index of minimum salary Employee
        if (e[i].salary < e[index].salary) { //if any employees salary is lower than The first employee 
            index = i;                       //index will be change to that employee(Whos Salary is minimun) 
        }
    }
    //Displaying the Employe Details Having Lowest Salary
    printf("\nEmployee with the Lowest Salary:\n");
    printf("ID: %d\n", e[index].id);
    printf("Name: %s", e[index].name);
    printf("Salary: %.2f\n", e[index].salary);
    return 0;
}
