#include<stdio.h>
int factorial(int n){
  if(n==0||n==1)
  return 1;
  else
  return n*factorial(n-1);

}
int main(){
  int n,result;
  printf("enter a non negative integer: \n");
  scanf("%d",&n);
  if(n<0)
  {
    printf("enter a non negative integer: \n");
  }
  else
  result=factorial(n);
  printf("factorial of %d is %d",n,result);
  return 0;
  
}
