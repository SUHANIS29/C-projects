//WAP to get sorted array
#include<stdio.h>
void bubblesort(int a[],int size)
{
  int i,j,temp;
  for ( i = 0; i < size-1; i++)
  {
    for (j = 0; j < size-i-1; j++)
    {
      if (a[j]>a[j+1])
      {
        temp=a[j];
        a[j]=a[j+1];
        a[j+1]=temp;
        
      }
      
    }
    
  }
  
}


int main(){
  int i,size,result;
  printf("enter the required no. of elements in an array \n");
  scanf("%d",&size);
  printf("enter the %d elements of array \n",size);
  for(i=0;i<size;i++)
  scanf("%d",&a[i]);
  result=bubblesort(a[],size);
  printf("the sorted array is \n");
  //to display the array;
 for ( i = 0; i < size; i++)
 {
  printf("%d ",a[i]);
 }
 printf("\n");
 return 0;
}
