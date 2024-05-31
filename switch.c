//WAP of switch case to perform operations
#include<stdio.h>
int main()
{
    int a,b,result;
    int operation;
   
    printf("enter two numbers: \n");
    scanf("%d%d",&a,&b);
     printf("Enter 1 for addition \n");
    printf("Enter 2 for subtraction \n");
    printf("enter 3 for multiplication \n");
    printf("enter 4 for division \n");
    printf("enter 5 for modulo \n");
    printf("enter any number from 1 to 5 for operation:");
    scanf("%d",&operation);
    switch(operation)
    {
        case 1:
        result=a+b;
        printf("addition is: %d",result);
        break;
         case 2:
        result=a-b;
        printf("Subtractuon is:%d",result);
        break;
         case 3:
        result=a*b;
        printf("Multiplication is:%d",result);
        break;
         case 4:
        result=a/b;
        printf("division is:%d",result);
        break;
         case 5:
        result=a%b;
        printf("Modulo is %d",result);
        break;
        default:
        printf("invalid operator");
    }
    return 0;
}
