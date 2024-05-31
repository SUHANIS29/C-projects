//wap to calculate simple interest
#include<stdio.h>
int main()
{
  float p,r,t,si;
  printf("Enter the value of principal ",p);
  scanf("%f",&p);
  printf("Enter the value of r ",r);
  scanf("%f",&r);
  printf("Enter time period ",t);
  scanf("%f",&t);
  si= (p*r*t)/100;
  printf("Simple interest is %f",si);
  return 0;
}
