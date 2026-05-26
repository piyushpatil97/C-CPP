#include <stdio.h>

struct Employee {
    int id;
    char name[50];
    float basicSalary;
    float bonus;
    float deduction;
    float netSalary;
};

int main() {

    struct Employee emp[5];
    int i;
    float totalPayroll = 0;

    printf("===== EMPLOYEE PAYROLL SYSTEM =====\n");

    for(i = 0; i < 5; i++) {

        printf("\nEnter Employee ID: ");
        scanf("%d", &emp[i].id);

        printf("Enter Employee Name: ");
        scanf("%s", emp[i].name);

        printf("Enter Basic Salary: ");
        scanf("%f", &emp[i].basicSalary);

        /* Bonus = 10% of basic salary */
        emp[i].bonus = emp[i].basicSalary * 0.10;

        /* Deduction = 5% of basic salary */
        emp[i].deduction = emp[i].basicSalary * 0.05;

        /* Net Salary */
        emp[i].netSalary = emp[i].basicSalary
                           + emp[i].bonus
                           - emp[i].deduction;

        totalPayroll += emp[i].netSalary;
    }

    printf("\n\n===== PAYROLL DETAILS =====\n");

    for(i = 0; i < 5; i++) {

        printf("\nEmployee ID      : %d", emp[i].id);
        printf("\nEmployee Name    : %s", emp[i].name);
        printf("\nBasic Salary     : %.2f", emp[i].basicSalary);
        printf("\nBonus            : %.2f", emp[i].bonus);
        printf("\nDeduction        : %.2f", emp[i].deduction);
        printf("\nNet Salary       : %.2f\n", emp[i].netSalary);
    }

    printf("\nTotal Payroll of Company = %.2f", totalPayroll);

    return 0;
}