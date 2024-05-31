//fxn for gcd &lcm
#include<stdio.h>

int gcd(int a, int b){
    while(a!=b){
if(b==0)
return a;
else
return gcd(b,a%b);
}
}
int lcm(int a,int b){
 
return (a*b)/gcd(a,b);
}
int main()
{
  int a,b,GCD,LCM;
  printf("enter two positive numbers \n");
  scanf("%d%d",&a,&b);
  GCD=gcd(a,b);
  printf("GCD of %d & %d is %d",a,b,GCD);
  LCM=lcm(a,b);
  printf("\nLCM of %d & %d is %d",a,b,LCM);
  return 0;
}
