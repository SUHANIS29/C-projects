//Weather the number is three digit or not
#include<stdio.h>
int main()
{
int n;
printf("Enter a number \n",n);
scanf("%d",&n);
if (n>99 && n<=999)
{
  printf("%d is three digit number",n);
}
else
{
  printf("%d is not a three digit number",n);
}
return 0;
}
