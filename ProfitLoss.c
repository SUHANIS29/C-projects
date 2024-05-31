//wap to check profit or loss
#include<stdio.h>
int main()
{
  int c,s;
  printf("Enter Selling price of an item \n",s);
  scanf("%d",&s);
  printf("Enter cost price of an item \n",c);
  scanf("%d",&c);
  if (c>s)
  {
    printf("Seller has made loss");
    printf("Loss is %d rs.",c-s);
  }
  if (c<s)
  {
    printf("Seller has made profit");
    printf("profit is %d rs.",s-c);
  }
  else
  {
    printf("Seller made neither loss not profit");
  }
  return 0;
}
