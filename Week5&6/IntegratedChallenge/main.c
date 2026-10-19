#include <stdio.h>

#define EMPLOYEE_COUNT 50

int main()
{
    float salaries[EMPLOYEE_COUNT];
    float totalSalary = 0.0f;
    float highestSalary = 0.0f;
    float lowestSalary = 0.0f;
    float searchSalary;
    float temporarySalary;
    int salaryFound = 0;
    int i;
    int j;

    printf("EMPLOYEE SALARY MANAGEMENT SYSTEM\n\n");

    for (i = 0; i < EMPLOYEE_COUNT; i++)
    {
        printf("Enter salary for employee %d: ", i + 1);
        scanf("%f", &salaries[i]);

        totalSalary += salaries[i];

        if (i == 0)
        {
            highestSalary = salaries[i];
            lowestSalary = salaries[i];
        }

        if (salaries[i] > highestSalary)
        {
            highestSalary = salaries[i];
        }

        if (salaries[i] < lowestSalary)
        {
            lowestSalary = salaries[i];
        }
    }

    printf("\nEnter salary to search for: ");
    scanf("%f", &searchSalary);

    for (i = 0; i < EMPLOYEE_COUNT; i++)
    {
        if (salaries[i] == searchSalary)
        {
            salaryFound = 1;
            printf("Salary found at employee %d.\n", i + 1);
            break;
        }
    }

    if (salaryFound == 0)
    {
        printf("Salary not found.\n");
    }

    for (i = 0; i < EMPLOYEE_COUNT - 1; i++)
    {
        for (j = 0; j < EMPLOYEE_COUNT - i - 1; j++)
        {
            if (salaries[j] > salaries[j + 1])
            {
                temporarySalary = salaries[j];
                salaries[j] = salaries[j + 1];
                salaries[j + 1] = temporarySalary;
            }
        }
    }

    printf("\n------------------------------------\n");
    printf("EMPLOYEE SALARY REPORT\n");
    printf("------------------------------------\n");
    printf("Total Salary   = %.2f\n", totalSalary);
    printf("Average Salary = %.2f\n", totalSalary / EMPLOYEE_COUNT);
    printf("Highest Salary = %.2f\n", highestSalary);
    printf("Lowest Salary  = %.2f\n", lowestSalary);

    printf("\nSORTED SALARIES\n");
    for (i = 0; i < EMPLOYEE_COUNT; i++)
    {
        printf("Employee %d = %.2f\n", i + 1, salaries[i]);
    }

    return 0;
}
