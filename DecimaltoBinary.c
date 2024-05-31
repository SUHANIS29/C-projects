//Wap to convert decimal number to binary
//armstrong
#include<stdio.h>
int main()
{
    int num,r,b=0,base=1;
    printf("enter any number: \n");
    scanf("%d",&num);
    while(num>0){
        r=num%2;
        b=b+r*base;
         base=base*10;
         num=num/2;
    }
    printf("Binary number is:%d",b);
    return 0;
}
