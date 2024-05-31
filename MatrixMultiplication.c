//multiplication of matrix
#include<stdio.h>
int main()
{
  int i,j;
  
  int a[3][3],b[3][3],c[3][3];

  //input of matrix
  printf("Elements of 1st matrix are:");
  for ( i = 0; i < 3; i++)
  {
    for ( j = 0; j < 3; j++)
    {
      scanf("%d",&a[i][j]);
    }
    
    
  }
  
  printf("Elements of 2nd matrix :");
  for ( i = 0; i < 3; i++)
  {
    for ( j = 0; j < 3; j++)
    {
      scanf("%d",&b[i][j]);
    }
    
    
  }
  
  //display of matrix
  printf("1st matrix is:");
  for ( i = 0; i < 3; i++)
  {
    printf("\n");
    for ( j = 0; j < 3; j++)
    {
      printf("%d ",a[i][j]);
    }
   
  }
   printf("\n 2nd matrix is:");
  for ( i = 0; i < 3; i++)
  {
    printf("\n");
    for ( j = 0; j < 3; j++)
    {
      printf("%d ",b[i][j]);
    }
    
  }
  //to get result
  for ( i = 0; i < 3; i++)
  {
    for ( j = 0; j < 3; j++)
    {
      c[i][j]=0;
      for (int k = 0; k < 3; k++)
      {
        c[i][j]+=a[i][k]*b[k][j];
      }
      
    }
    
  }
  printf("\nmultiplication of matrix : \n");
  for ( i = 0; i < 3; i++)
  {
    printf("\n");
    for ( j = 0; j < 3; j++)
    {
      printf("%d ",c[i][j]);
    }
    
  }
  


return 0;
  }
