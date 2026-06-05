#include<stdio.h>
int main(){
    long long num;
    int largestprime=0;
    printf("enter a number: ");
    scanf("%lld",&num);
 while(num%2==0){
    largestprime=2;
    num=num/2;
 }
 for(int i =3;i*i<=num;i=i+2){
    while(num%i==0){
        largestprime=i;
        num=num/i;
    }
 }
 if(num>2)
largestprime = num;
printf("largest prime factor=%d",largestprime);
return 0;


}