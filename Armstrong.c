//WAP to check number is armstrong or not
#include<stdio.h>
int main()
{
    int n,c,arm,r;
    printf("enter a three digit number:");
    scanf("%d",&n);
    c=n;
    while(n>0)
    {
        r=n%10;
        arm=r*r*r+arm;
        n=n/10;
    }
    if(c==arm)
    printf("is armstrong number ");
    else
    printf("is not armstrong number");
    return 0;
}
