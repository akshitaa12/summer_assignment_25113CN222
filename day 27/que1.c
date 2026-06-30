#include <stdio.h>
struct Student
{
    int roll;
    char name[50];
    float marks;
};

int main()
{
    struct Student s;
    printf("Enter roll no: ");
    scanf("%d", &s.roll);

    printf("Enter Name: ");
    scanf("%d", s.name);

    printf("Enter marks: ");
    scanf("%d", &s.marks);

    printf("\n---Student Record ---\n");
    printf("Roll no: %d\n", s.roll);
    printf("Name: %s\n", s.name);
    printf("Marks: %.2f\n", s.marks);

    return 0;
}