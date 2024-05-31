#include<stdio.h>
int main()
{
  int n;
  printf("Enter a number\n",n);
  scanf("%d",&n);
  if (n%2==0)
  {
    printf("%d is an Even number",n);
  }
  else                                  //if(n%2!=0)  {printf("odd")}
  {
    printf("%d is an odd number",n);
  }
  return 0;
}
