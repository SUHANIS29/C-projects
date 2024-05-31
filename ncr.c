//wap to find nCr
#include<stdio.h>
int main()
{
  int f(int num);
  int i,n,r,ncr;
  printf("enter values of n &r \n");
  scanf("%d%d",&n,&r);
  ncr=f(n)/(f(r)*f(n-1));
  printf("%d \n",ncr);

}

int f(int num)
{
  int i,f=1;
  for ( i = 1; i < = num; i++)
  {
    f=f*i;
  }
  return f;
}
