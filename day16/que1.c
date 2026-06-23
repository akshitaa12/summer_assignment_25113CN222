#include <stdio.h>
int main()
{
    int n, i, sum = 0, total;
    printf("enter n: ");
    scanf("%d", &n);

    int arr[n - 1];
    printf("enter %d elements", n - 1);
    for (i = 0; i < n; i++)
    {
        scanf("%d", &arr[i]);
        sum = sum + arr[i];
    }
    total = n * (n + 1) / 2;
    printf("missing number = %d", total - sum);
    return 0;
}