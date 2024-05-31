#include<stdio.h>
int main()
{
    int weekday;
 printf("Enter the day number from 1 to 7 :",weekday);
 scanf("%d",&weekday);
 switch(weekday)
 {
    case 1: '1';
      printf("\n Today is monday");
        break;
    case 2:'2';
        printf("Today is tuesday");
        break;
    case 3:'3';
        printf("Today is wednesday");
        break;
    case 4:'4';
        printf("Today is thursday");
        break;
    case 5:'5';
        printf("Today is friday");
        break;
    case 6:'6';
        printf("Today is saturday");
        break;
    case 7:'7';
        printf("Today is sunday");
        break;
    default:
    printf("Print valid number between 1 to 7");
 }
 return 0;
}
