#include <stdio.h>
int main()
{
    char str[100];
    int i = 0, len = 0, flag = 1;

    printf("Enter a string: ");
    scanf("%s", str);

    while (i = 0; i < len / 2; i++)
    {
        if (str[i] != str[len - i - 1])
        {

            flag = 0;
            break;
        }
    }
    if (flag)
        printf("palindrome string");
    else
        printf("Not a  palindrome string");

    return 0;
}