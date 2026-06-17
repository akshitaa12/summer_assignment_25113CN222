#include <stdio.h>
int main()
{
    int arr[5], sum = 0;
    float avg;

    printf("enter 5 elements: ");
    for (int i = 0; i < 5; i++)
    {
        scanf("%d", &arr[i]);
        sum = sum + arr[i];
    }
    avg = sum / 5.0;

    printf("sum=%d\n", sum);
    printf("average= %.2f", avg);
    return 0;
}