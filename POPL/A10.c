#include <stdio.h>
#include <string.h>

struct bank
{
    int acc_no;
    char name[50];
    double balance;
    int pin_code;
    char acc_type[20];
    char bank_fac[10];
};

struct bank c[1000];

void fromfill()
{
    int x;

    printf("Enter customer no.: ");
    scanf("%d", &x);

    printf("Enter customer account no.: ");
    scanf("%d", &c[x].acc_no);

    printf("Enter customer name: ");
    scanf("%s", c[x].name);

    printf("Enter customer balance: ");
    scanf("%lf", &c[x].balance);

    printf("Enter customer pin code: ");
    scanf("%d", &c[x].pin_code);

    printf("Internet banking (yes/no): ");
    scanf("%s", c[x].bank_fac);
}

void read_detail()
{
    int x;

    printf("Enter customer no. to view details: ");
    scanf("%d", &x);

    printf("\nCustomer Account No.: %d\n", c[x].acc_no);
    printf("Customer Name: %s\n", c[x].name);
    printf("Customer Balance: %.2lf\n", c[x].balance);
    printf("Customer Pin Code: %d\n", c[x].pin_code);
}

void identify()
{
    int x;

    printf("Enter customer no.: ");
    scanf("%d", &x);

    if (c[x].balance > 1000000)
    {
        strcpy(c[x].acc_type, "golden");
    }
    else if (c[x].balance > 500000)
    {
        strcpy(c[x].acc_type, "silver");
    }
    else
    {
        strcpy(c[x].acc_type, "general");
    }

    printf("Type of customer: %s\n", c[x].acc_type);
}

void disp_list(int *ptr)
{
    int a;

    printf("\nCustomer Account No.\tInternet Banking\n");

    for (a = 0; a < *ptr; a++)
    {
        printf("%d\t\t\t%s\n", c[a].acc_no, c[a].bank_fac);
    }
}

int main()
{
    int n, x;

    printf("Enter no. of customers: ");
    scanf("%d", &n);

    int *ptr = &n;

    do
    {
        printf("\n");
        printf("1. Fill customer detail\n");
        printf("2. Read customer detail\n");
        printf("3. Identify customer type\n");
        printf("4. Display internet banking list\n");
        printf("5. Exit\n");

        printf("Enter your choice: ");
        scanf("%d", &x);

        switch (x)
        {
            case 1:
                fromfill();
                break;

            case 2:
                read_detail();
                break;

            case 3:
                identify();
                break;

            case 4:
                disp_list(ptr);
                break;

            case 5:
                printf("Thank You\n");
                break;

            default:
                printf("Invalid Choice\n");
        }

    } while (x != 5);

    return 0;
}

