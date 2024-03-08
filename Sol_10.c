#include <stdio.h>
#include <string.h>

// Define the Employee structure
struct Employee {
    char firstName[50];
    char lastName[50];
    double monthlySalary;
};

// Function to initialize the fields of an Employee
void emp_init(struct Employee* e, const char* firstName, const char* lastName, double monthlySalary) {
    strcpy(e->firstName, firstName);
    strcpy(e->lastName, lastName);
    e->monthlySalary = monthlySalary;
}

// Function to set the salary of an Employee
void set_salary(struct Employee *e, double salary) {
    e->monthlySalary = salary;
}

// Function to display the details of an Employee
void emp_display(struct Employee *e) {
    printf("Name: %s %s\n", e->firstName, e->lastName);
    printf("Monthly Salary: %.2f\n", e->monthlySalary);
}

int main() {
    // Create two Employee objects
    struct Employee emp1, emp2;

    // Initialize employee details
    emp_init(&emp1, "John", "Doe", 5000.0);
    emp_init(&emp2, "Jane", "Smith", 6000.0);

    // Display yearly salary for each employee
    printf("Yearly salary for Employee 1: %.2f\n", emp1.monthlySalary * 12);
    printf("Yearly salary for Employee 2: %.2f\n", emp2.monthlySalary * 12);

    // Give each employee a 10% raise
    set_salary(&emp1, emp1.monthlySalary * 1.1);
    set_salary(&emp2, emp2.monthlySalary * 1.1);

    // Display yearly salary again
    printf("\nAfter 10%% raise:\n");
    printf("Yearly salary for Employee 1: %.2f\n", emp1.monthlySalary * 12);
    printf("Yearly salary for Employee 2: %.2f\n", emp2.monthlySalary * 12);

    return 0;
}
