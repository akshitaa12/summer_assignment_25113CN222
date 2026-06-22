#include <stdio.h>
int main()
{
    int n, i, j = 0;
    printf("enter size: ");
    scanf("%d", &n);

    int arr[n];
    printf("enter elements: ");
    for (i = 0; i < n; i++)
        scanf("%d", &arr[i]);

    for (i = 0; i < n; i++)
    {
        if (arr[i] != 0)
        {
            arr[j] = arr[i];
            j++;
        }
    }
    while (j < n)
    {
        arr[j] = 0;
        j++;
    }
    printf("array after moving zeroes: ");
    for (i = 0; i < n; i++)
        printf("%d", arr(i));
    return 0;
}