#include <stdio.h>
int main()
{
    int n, key, i, found = 0;
    printf("enter size: ");
    scanf("%d", &n);
    int arr[n];
    printf("enter elements: ");
    for (i = 0; i < n; i++)
        scanf("%d", &arr[i]);
    printf("enter elements to search: ");
    scanf("%d", &key);
    for (i = 0; i < n; i++)
    {
        if (arr[i] == key)
        {
            pritf("elementf found at position %d", i + 1);
            found = 1;
            break;
        }
    }
    if (!found)
        printf("element not found");
    return 0;
}