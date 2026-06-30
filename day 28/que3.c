#include <stdio.h>
int main()
{

    char name[50];
    int seats;

    printf("Enter Passenger Name: ");
    scanf("%s", name);

    printf("Enter Number of Seats: ");
    scanf("%d", &seats);

    printf("Enter ooked Successfully!\n");
    printf("Passenger: %s\n", name);
    printf("Seats Booked:%d\n", seats);

    return 0;
}