#include<stdio.h>
int main()
{
  int ml[3][3],m2[3][3],mf[3][3],i,k,j;
  printf("enter elements for m1");
  for ( i = 0; i < 3; i++)
  {
    for ( j = 0; j < 3; j++)
    {
      scanf("%d",&m1[i][j]);
    }
    
  }
  printf("enter elements for m2");
  for ( i = 0; i < 3; i++)
  {
    for ( j = 0; j < 3; j++)
    {
      scanf("%d",&m2[i][j])
    }
    
  }
  for ( i = 0; i < 3; i++)
  {
    for ( j = 0; j < count; j++)
    {
      mf[i][j]=0;
      for ( k = 0; k < 3; k++)
      {
        mf[i][j]+=m1[i][k]*m2[k][j];
      }
      
    }
    
  }
  //display multiplication of array
  for ( i = 0; i < 3; i++)
  {
    for ( j = 0; j < 3; j++)
    {
      printf("%d \t",mf[i][j]);

    }
    printf("\n");
  }
  
  





  return 0;
}
