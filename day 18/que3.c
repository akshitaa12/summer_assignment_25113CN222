#include <stdio.h>
int main()
{
    int a[50], n, key;
    int low, high, mid, i;

    printf("rnter sizr: ");
    scanf("%d", &n);

    for (i = 0; i < n; i++)
        scanf("%d", &a[i]);

    printf("enter element to search: ");
    scanf("%d", &key);

    low = 0;
    high = n - 1;

    while (low <= high)
    {
        mid = (low + high) / 2;

        if (a[mid] == key)
        {
            printf("element found at position %d", mid + 1);
            return 0;
        }
        else if(a[mid]<key)
        low = mid + 1;
        else
        high = mid - 1;
    }
    printf("element not found");
    return 0;
}