//wap to accept 3 numbers and display largest of them;
#include<stdio.h>
int main(){
  int a,b,c;
  printf("Enter 3 numbers:\n");
  scanf("%d%d%d",&a,&b,&c);
  if (a>b && a>c)
  {
    printf("%d is the largest ",a);
  }
  if (b>a && b>c)
  {
    printf("%d is largest ",b);
  }
  else
  {
    printf("%d is largest ",c);
  }
return 0;
}
