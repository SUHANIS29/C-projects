//function to add num
#include<stdio.h>
int add(int a, int b); //fxn declaration
int main(){
    int a=5;
    int b=10;
    int sum=add(a,b); //fxn calling
    printf("sum is %d",sum);
    return 0;
}
int add(int a, int b){
    return a+b;
}
