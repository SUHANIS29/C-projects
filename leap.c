#include<stdio.h>
int main()
{
    int a;
    printf("Enter a year",a);
    scanf("%d",&a);
    if (a%4==0 && a%100!=0 || a%400==0)
    {
        printf("%d is leap year",a);
    }
    else
{
        printf("%d not a leap year",a);
}
    return 0;
}
