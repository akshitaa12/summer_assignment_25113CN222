#include<stdio.h>
int palindrome(int n)
{
    int rev = 0,temp = n;

    while(temp>0){
        rev = rev * 10 + temp % 10;
        temp = temp/10;
    }
    return (rev == n);
}
int main (){
    int num;

    printf("enter a number : ");
   scanf("%d",&num);
   if(palindrome(num))
   printf("palindrome number");
   else
   printf("not a palindrome number");
   return 0;
}