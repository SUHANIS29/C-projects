//Write a program to check if the user entered number is divisible by 10 or not..
#include<stdio.h>
int main(){
    int n;
    printf("enter a number:\n");
    scanf("%d",&n);
    
    if(n%10==0)
    {
        printf("%d is divisible by 10",n);
    }
    else
    {
        printf("%d is not divisible by 10",n);
    }
    return 0;
}
