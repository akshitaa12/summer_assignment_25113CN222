#include <stdio.h>
int main()
{
    int a[10][10];
    int r, c, i, j;
    printf("enter rows and columns: ");
    scanf("%d %d", &r, &c);

    printf("enter matrix:/n");
    for (i = 0; i < r; i++)
    {
        for (j = 0; j < c; j++)
            printf("%d", a[i][j]);
        printf("/n");
    }
    return 0;
}