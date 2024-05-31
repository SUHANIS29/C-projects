//Write a C program to determine whether a given number is negative, positive or zero, using if-else statements
#include<stdio.h>
int main(){
    int n;
    printf("enter any number\n");
    scanf("%d",&n);
    if(n>0)
    {
        printf("the number is positive");
    }
    else if(n==0){
        printf("the number is zero");
    }
    else{
        printf("the number is negative");
    }
    return 0;
}
