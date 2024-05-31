
#include<stdio.h>
int main(){
  int c;
  //accept temperature in celsius
  printf("enter themperature in Celsius: \n");
  scanf("%d",&c);
  int fahrenheit=1.8*c+32;
  printf("Temperature in Fahrenheit:%d \n",fahrenheit);
  return 0;
}
