#include <stdio.h>
int main()
{
    int arr[5];
    int even = 0, odd = 0;

    peintf("enter 5 elements:");
    for (int i = 0; i < 5; i++)
    {
        scanf("%d", &arr[i]);
        if (arr[i] % 2 == 0)
            even++;
        else
            odd++;
    }
    printf("even elements==%d\n", even);
    printf("odd elements =%d", odd);
    return 0;
}