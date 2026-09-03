#include <stdio.h>

int main()
{
    double revenue;
    double expenses;
    double balance;

    int departments;
    double payroll;
    double procurement;
    double assets;

    printf("MUNICIPAL BUDGET CALCULATOR\n\n");

    printf("Enter total revenue: ");
    scanf("%lf", &revenue);

    printf("Enter total expenses: ");
    scanf("%lf", &expenses);

    printf("Enter number of departments: ");
    scanf("%d", &departments);

    printf("Enter payroll: ");
    scanf("%lf", &payroll);

    printf("Enter procurement: ");
    scanf("%lf", &procurement);

    printf("Enter assets: ");
    scanf("%lf", &assets);

    balance = revenue - expenses;

    printf("\n------------------------------------\n");
    printf("MUNICIPAL FINANCIAL SUMMARY\n");
    printf("------------------------------------\n");
    printf("Revenue     = %.2f\n", revenue);
    printf("Expenses    = %.2f\n", expenses);
    printf("Balance     = %.2f\n", balance);
    printf("Departments = %d\n", departments);
    printf("Payroll     = %.2f\n", payroll);
    printf("Procurement = %.2f\n", procurement);
    printf("Assets      = %.2f\n", assets);
    printf("------------------------------------\n");

    return 0;
}