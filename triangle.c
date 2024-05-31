//decide wether sides can form triangle or not
#include<stdio.h>
int main()
{
  int a,b,c;
  printf("enter three sides of a triangle",a,b,c);
  scanf("%d%d%d",&a,&b,&c);
  if (a+b>c && a+c>b && b+c>a)
  {
    printf("Sides can form a triangle");
  }
  else{
    printf("sides can't form a triangle");
  }
  return 0;
}
