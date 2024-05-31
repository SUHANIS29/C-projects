//wap to accept and display array ; 
#include<stdio.h>
void accept_array(int a[],int size)
{   printf("enter %d elements of array \n",size);
    for(int i=0;i<size;i++)
    scanf("%d",&a[i]);
}

void display_array(int a[],int size)
{ 
   printf("Elements of array are: \n"); 
   for(int i=0;i<size;i++)
   {
   printf("%d ",a[i]);
}
printf("\n");

}

int main(){
    int size;

    printf("enter the no. of elements required in array \n");
    scanf("%d",&size);
        int a[size];
    accept_array(a,size);
    display_array(a,size);
    return 0;
}
