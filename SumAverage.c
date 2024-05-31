#include<stdio.h>
void main(){
 int a[5],i,sum;
   float avg;
    printf("enter the elements of array \n",a[i]);
    for(i=0;i<5;i++)
    {
        scanf("%d",&a[i]);
    }
    printf("array is:\n");
 for(i=0;i<5;i++)
 {
     printf("%d ",a[i]);
     sum=sum+a[i];
     avg=sum/2;
 }
printf("\n average is %f",avg);
}
