#include <stdio.h>
int main()
{
    int secret = 7, guess;

    printf("Guess a number(1-10)");
    scanf("%d", &guess);

    if (guess == secret)
        printf("Congratulations! You guessed correctly.");
    else
        printf("Wrong guess! The correct number is %d", secret);
    return 0;
}
