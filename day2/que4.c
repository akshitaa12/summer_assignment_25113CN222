#inlcude<stdio.h>
int maim(){
    int num,original,reverse=0,digit;
    printf("enter a number: ");
    scanf("%d",&num);
    original=num;
    while(num!=0){
        digit=num%10;
        reverse=reverse*10+digit;
        num=num/10;
    }
    if(original==reverse)
    printf("palindrome number");
    else("not a palindrome number");
    return 0;
}