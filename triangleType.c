#include<stdio.h>
int main()
{
    double a,b,c;
    printf("Enter sides of triangle:",a,b,c);
    scanf("%lf%lf%lf",&a,&b,&c);
    if (a==b && b==c)
    {
        printf("eqilateral triangle");
    }
    else if(a==b||b==c||a==c)
    {
        printf("isosceles triangle");
    }

    else
    {
        printf("scalene triangle");
    }
    return 0;
}
