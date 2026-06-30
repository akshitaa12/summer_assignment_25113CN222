#include <stdio.h>
int main()
{
    int ans, score = 0;

    printf("quiz\n\n");

    printf("Q1. Capital of India?\n");
    printf("1. Delhi\n2. Mumbai\n3. Chennai\n");
    scanf("%d", &ans);
    if (ans == 1)
        score++;

    printf("\nQ2. 5+3 = ?\n");
    printf("1. 6\n2. 8\n3.9\n");
    scanf("%d", &ans);
    if (ans == 2)
        score++;
    printf("\nYour Score = %d/2\n", score);

    return 0;
}