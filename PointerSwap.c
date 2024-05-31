//WAP to swap the numbers using pointer
#include<stdio.h>
void swap( int *a,int *b)
{
  int temp;
  temp=*a;
  *a=*b;
  *b=temp;
}

void main()
{
  int a,b;
  printf("enter two numbers a & b : \n",a,b);
  scanf("%d%d",&a,&b);
  printf("Before swapping numbers are a is %d & b is %d \n",a,b);
  swap(&a,&b);
   printf("after swapping numbers are a is %d & b is %d \n",a,b);
}
