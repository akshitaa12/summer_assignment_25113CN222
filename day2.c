#include<stdio.h>
int main() {
int num,sum=0,digit;

printf("enter a number: ");
scanf("%d",&sum);
 while(num!=0){
    digit=num%10;
    sum=sum+digit;
    num=num/10;
 }
 printf("sum of digits =%d",sum);
 return 0;
}


#include<stdio.h>
int main(){
int num,reverse=0, digit;

printf("enter a number: ");
scanf("%d",&num);

while(num!=0){
    digit=num%10;
    reverse=reverse*10+digit;
    num=num/10;

}
printf("reversed number=%d",reverse);
return 0;
}

#include<stdio.h>
int main(){
int num,product=1,digit;

printf("enter a number: ");
scanf("%d",&num);
while(num!=0){
    digit=num%10;
    product=product*digit;
    num=num/10;    
}
printf("product of digits=%d",product);
return 0;
}

#include<stdio.h>
int main(){
int num,original,reverse=0,digit;

printf("enter a number:");
scanf("%d",&num);
 original=num;
  while(num!=0){
    digit=num%10;
    reverse=reverse*10+digit;
    num=num/10;
  }
  if(original==reverse)
  printf("palindrome number");
  else
  printf("not a palindrome number");
  return 0;
}