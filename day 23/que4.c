#include <stdio.h>
int main()
{
    char str[100];
    int i = 0, alpha = 0, digit = 0, special = 0;

    printf("Enter a string: ");
    fgets(str, sizeof(str), stdin);

    while (str[i] != '\0')
    {
        if ((str[i] >= 'A' && str[i] <= 'Z') || (str[i] >= 'a' && str[i] <= 'z'))
            alpha++;
        else if (str[i] >= '0' && str[i] <= '9')
            digit++;
        else if (str[i] !=''&& str[i] != '\n')
            special++;
    }
    printf("Alphabets  = %d\n", alpha);
    printf("Digits = %d\n", digit);
    printf("Special Characters = %d", special);

    return 0;
}