//find area and perimeter of rectangle and compare
#include<stdio.h>
int main()
{
  float l,b,area,perimeter;
printf("enter length of rectangle \n");
scanf("%f",&l);
printf("enter breadth of rectangle \n");
scanf("%f",&b);
area = l*b;
perimeter = 2*(l+b);
if (area>perimeter)
{
  printf("area>perimeter");
}
if (area<perimeter)
{
  printf("area<perimeter");
}
return 0;
}
  
