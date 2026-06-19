#include <stdio.h>
int main()
{
    int n, key, i, count = 0;
    printf("enter size: ");
    scanf("%d", &n);
    int arr[n];
    printf("enter elements:");
    for (i = 0; i < n; i++)
        scanf("%d", &arr[i]);

    printf("enter element: ");
    scanf("%d", &key);
    for (i = 0; i < n; i++)
    {
        if (arr[i] == key)
            count++;
    }
    printf("frequemcy = %d", count);
    return 0;
}