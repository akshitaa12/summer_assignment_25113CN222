#include <stdio.h>
struct Bank
{
    int accNo;
    char name[50];
    float Balance;
};

int main()
{
    struct Bank b;

    printf("Enter Account Number:");
    scanf("%d", &b.accNo);

    printf("Enter Account Holder Name: ");
    scanf("%s", b.name);

    printf("Enter balance: ");
    scanf("%f", b.Balance);

    printf("\n---Account Details---\n");
    printf("Account No: %d\n", b.accNo);
    printf("Name:%s\n", b.name);
    printf("Balance: %.2f\n", b.Balance);

    return 0;
}