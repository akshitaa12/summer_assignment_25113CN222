#include <stdio.h>
int main()
{
    int n, i, j, count, maxcount = 0, element;
    printf("enter size: ");
    scanf("%d", &n);

    int arr[n];
    printf("array elements; ");
    for (i = 0; i < n; i++)
        scanf("%d", &arr[i]);
    for (i = 0; i < n; i++)
    {
        count = 1;

        for (j = 1 + 1; j < n; j++)
        {
            if (arr[i] == arr[j])
                count++;
        }
        if (count > maxcount)
        {
            maxcount = count;
            element = arr[i];
        }
    }
    printf("maximum frequency element=%d", element);
    return 0;
}