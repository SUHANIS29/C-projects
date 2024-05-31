//pallindrome
#include<stdio.h>
#include<string.h>
int main()
{
  int i;
  char string[50];
  printf("enter a string \n");
  scanf("%s",string);
  int flag;
  int length=strlen(string);
   for(i=0;i=length/2;i++)
   {
    if(string[i]!=string[length-i-1])
    flag=1;
    break;
   }
   if(flag)
   printf("is not pallindrome");
   else
   printf("is pallindrome");
  return 0;
}
