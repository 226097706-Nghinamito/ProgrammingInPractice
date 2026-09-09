#include <stdio.h>

int main()
{
    char supplierName[50];
    float price;
    float budget;
    int registered;
    int documentsComplete;

    printf("TENDER EVALUATION\n\n");

    printf("Enter supplier name: ");
    scanf("%49s", supplierName);

    printf("Enter price: ");
    scanf("%f", &price);

    printf("Enter budget: ");
    scanf("%f", &budget);

    printf("Is supplier registered? (1=Yes, 0=No): ");
    scanf("%d", &registered);

    printf("Are all documents complete? (1=Yes, 0=No): ");
    scanf("%d", &documentsComplete);

    printf("\n------------------------------------\n");
    printf("TENDER EVALUATION RESULT\n");
    printf("------------------------------------\n");

    printf("Supplier = %s\n", supplierName);
    printf("Price    = %.2f\n", price);
    printf("Budget   = %.2f\n", budget);

    if (registered == 1 && documentsComplete == 1 && price <= budget)
    {
        printf("Result   = Qualified\n");
    }
    else
    {
        printf("Result   = Disqualified\n");
    }

    printf("------------------------------------\n");

    return 0;
}