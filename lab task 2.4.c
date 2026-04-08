// Write a program in C to store and print the information of N employees using dynamic memory allocation and structures.
#include <stdio.h>
#include <stdlib.h>

struct Employee {
    int empID;
    char name[50];
    float salary;
};
int main() {
    struct Employee *emp;
    int n, i;
    printf("Enter number of employees: ");
    scanf("%d", &n);
    emp = (struct Employee *)malloc(n * sizeof(struct Employee));
    if (emp == NULL) {
        printf("Memory allocation failed!");
        return 1;
    }
    for (i = 0; i < n; i++) {
        printf("\nEnter details of Employee %d\n", i + 1);
        printf("Employee ID: ");
        scanf("%d", &emp[i].empID);
        printf("Employee Name: ");
        scanf("%s", emp[i].name);
        printf("Salary: ");
        scanf("%f", &emp[i].salary);
    }
    printf("\n--- Employee Information ---\n");
    for (i = 0; i < n; i++) {
        printf("\nEmployee %d", i + 1);
        printf("\nID: %d", emp[i].empID);
        printf("\nName: %s", emp[i].name);
        printf("\nSalary: %.2f\n", emp[i].salary);
    }
    free(emp);
    return 0;
}

