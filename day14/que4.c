#include<stdio.h>
int main(){
    int n,i,j;
    printf("enter size: ");
    scanf("%d",&n);
    int arr[n];
    printf("enter elements: ");
    for(i=0;i<n;i++)
    scanf("%d",&arr[i]);
    printf("duplicate elements are:\n ");
 for(i=0;i<n;i++){
    for(j=i+1;j<n;j++){
        if(arr[i]==arr[j]){
            printf("%d",arr[i]);
            break;
        }
    }
 }
 return 0;
}