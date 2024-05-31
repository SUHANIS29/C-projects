#include<stdio.h>
int main()
{
  int n;
  printf("Enter percentage \n",n);
  scanf("%d",&n);
  if (n>=90 && n<=100)
  {
    printf("Excellent");
  }
  else if (n>=80 && n<90)
  {
    printf("Very good");
  }
  else if (n>=70 && n<80)
  {
    printf("good");
  }
  else if (n>=35 && n<70)
  {
    printf("you can do better");
  }
  else{
    printf("failed");
  }
  return 0;
}
