//wap to to find roots of quadratic eqn
#include<stdio.h>
#include<math.h>
int main(){
  int a,b,c,d,r1,r2,real,img,root1,root2;
printf("enter coefficients of a,b,c to get eqn as a*x*x+b*x+c=0: \n ");
scanf("%d%d%d",&a,&b,&c);
d=b*b-4*a*c;
if (d=0)
{ root1=-b/2*a;
root2=-b/2*a;
  printf("roots are real and equal \n");
  printf("roots are:%d & %d",root1,root2);
}
if (d>0)
{
  printf("roots are real & distinct \n");
  r1=(-b+sqrt(b*b-4*a*c))/2*a;
  r2=-(-b+sqrt(b*b-4*a*c))/2*a;

  printf("roots are:%d & %d",r1,r2);
}
else{
  printf("roots are not real \n");
  real=-b/2*a;
  img=(sqrt(b*b-4*a*c)/2*a);
  printf("roots are:%d+i%d & %d-i%d",real,img,real,img);
}

return 0;
}
