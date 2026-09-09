#include <stdio.h>

int main()
{
    float basicSalary;
    float housing;
    float transport;
    float tax;

    float grossSalary;
    float netSalary;

    printf("EMPLOYEE SALARY CALCULATOR\n\n");

    printf("Enter basic salary: ");
    scanf("%f", &basicSalary);

    printf("Enter housing allowance: ");
    scanf("%f", &housing);

    printf("Enter transport allowance: ");
    scanf("%f", &transport);

    printf("Enter tax: ");
    scanf("%f", &tax);

    grossSalary = basicSalary + housing + transport;
    netSalary = grossSalary - tax;

    printf("\n------------------------------------\n");
    printf("EMPLOYEE SALARY SUMMARY\n");
    printf("------------------------------------\n");

    printf("Basic Salary = %.2f\n", basicSalary);
    printf("Housing      = %.2f\n", housing);
    printf("Transport    = %.2f\n", transport);
    printf("Tax          = %.2f\n", tax);
    printf("Gross Salary = %.2f\n", grossSalary);
    printf("Net Salary   = %.2f\n", netSalary);

    if (netSalary >= 20000)
    {
        printf("Income Category = High Income\n");
    }
    else
    {
        printf("Income Category = Standard Income\n");
    }

    return 0;
}