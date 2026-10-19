#include <stdio.h>
#include <string.h>

#define SUPPLIER_COUNT 5
#define TEXT_SIZE 100

void readLine(char text[], int size)
{
    int length;

    fgets(text, size, stdin);
    length = (int)strlen(text);

    if (length > 0 && text[length - 1] == '\n')
    {
        text[length - 1] = '\0';
    }
}

int main()
{
    char supplierNames[SUPPLIER_COUNT][TEXT_SIZE] = {{0}};
    char emails[SUPPLIER_COUNT][TEXT_SIZE] = {{0}};
    char phones[SUPPLIER_COUNT][TEXT_SIZE] = {{0}};
    char towns[SUPPLIER_COUNT][TEXT_SIZE] = {{0}};
    char searchName[TEXT_SIZE];
    char backupName[TEXT_SIZE];
    char description[250];
    int choice = 0;
    int supplierTotal = 0;
    int i;
    int found;

    do
    {
        printf("\n====================================\n");
        printf(" MUNICIPAL SUPPLIER MANAGEMENT\n");
        printf("====================================\n");
        printf("1. Add Supplier\n");
        printf("2. Display Suppliers\n");
        printf("3. Search Supplier\n");
        printf("4. Show Name Length\n");
        printf("5. Exit\n");
        printf("Enter choice: ");
        scanf("%d", &choice);
        getchar();

        switch (choice)
        {
            case 1:
                if (supplierTotal == SUPPLIER_COUNT)
                {
                    printf("Maximum of %d suppliers reached.\n", SUPPLIER_COUNT);
                    break;
                }

                printf("Enter supplier name: ");
                readLine(supplierNames[supplierTotal], TEXT_SIZE);
                printf("Enter email: ");
                readLine(emails[supplierTotal], TEXT_SIZE);
                printf("Enter phone: ");
                readLine(phones[supplierTotal], TEXT_SIZE);
                printf("Enter town: ");
                readLine(towns[supplierTotal], TEXT_SIZE);
                supplierTotal++;
                printf("Supplier added successfully.\n");
                break;

            case 2:
                if (supplierTotal == 0)
                {
                    printf("No suppliers have been added.\n");
                    break;
                }

                for (i = 0; i < supplierTotal; i++)
                {
                    strcpy(backupName, supplierNames[i]);
                    strcpy(description, supplierNames[i]);
                    strcat(description, " operates in ");
                    strcat(description, towns[i]);
                    strcat(description, ".");

                    printf("\n--- SUPPLIER DETAILS ---\n");
                    printf("Name  : %s\n", supplierNames[i]);
                    printf("Email : %s\n", emails[i]);
                    printf("Phone : %s\n", phones[i]);
                    printf("Town  : %s\n", towns[i]);
                    printf("Backup Name: %s\n", backupName);
                    printf("Description: %s\n", description);
                }
                break;

            case 3:
                if (supplierTotal == 0)
                {
                    printf("No suppliers have been added.\n");
                    break;
                }

                printf("Enter supplier name to search: ");
                readLine(searchName, TEXT_SIZE);
                found = 0;

                for (i = 0; i < supplierTotal; i++)
                {
                    if (strcmp(supplierNames[i], searchName) == 0)
                    {
                        printf("Supplier found: %s (%s)\n", supplierNames[i], towns[i]);
                        found = 1;
                        break;
                    }
                }

                if (found == 0)
                {
                    printf("Supplier not found.\n");
                }
                break;

            case 4:
                if (supplierTotal == 0)
                {
                    printf("No suppliers have been added.\n");
                    break;
                }

                for (i = 0; i < supplierTotal; i++)
                {
                    printf("%s name length = %d\n", supplierNames[i], (int)strlen(supplierNames[i]));
                }
                break;

            case 5:
                printf("Goodbye.\n");
                break;

            default:
                printf("Invalid choice.\n");
        }
    } while (choice != 5);

    return 0;
}
