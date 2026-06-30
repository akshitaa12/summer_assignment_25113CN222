#include <stdio.h>

struct Contact
{
    char name[50];
    char phone[15];
};

int main()
{
    struct Contact c;
    printf("Enter name: ");
    scanf("%s", c.name);

    printf("Enter Phone Number: ");
    scanf("%d", c.phone);

    printf("\n--- Contact Details---\n");
    printf("Name: %s\n", c.name);
    printf("Phone: %s\n", c.phone);

    return 0;
}
