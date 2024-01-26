#include <stdio.h>

#define MAX_EMPLOYEES 100

struct Employee {
    int id;
    char name[50];
    float salary;
};

int main() {
    int n;
    struct Employee employees[MAX_EMPLOYEES];

    printf("Enter the number of employees: ");
    scanf("%d", &n);

    // Input employee details
    for (int i = 0; i < n; i++) {
        printf("\nEnter details for employee %d:\n", i+1);
        printf("ID: ");
        scanf("%d", &employees[i].id);
        printf("Name: ");
        scanf("%s", employees[i].name);
        printf("Salary: ");
        scanf("%f", &employees[i].salary);
    }

    printf("\nEmployees with salary above 5000:\n");

    // Print employee details with salary above 5000
    for (int i = 0; i < n; i++) {
        if (employees[i].salary > 5000) {
            printf("ID: %d, Name: %s, Salary: %.2f\n", employees[i].id, employees[i].name, employees[i].salary);
        }
    }

    return 0;
}
