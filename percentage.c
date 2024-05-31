//WAP top get percentage
#include<stdio.h>
int main()
{
  int x1,x2,x3,x4,x5;
  float percent;
  printf("Enter marks");
  scanf("%d%d%d%d%d",&x1,&x2,&x3,&x4,&x5);
  percent = ((x1+x2+x3+x4+x5)/5)*100;
  printf("Percentage is %f ",percent);
  return 0;
}
