//Write a program in C to display n numbers of natural numbers and their sum
#include<stdio.h>
int main(){
    int n,i;
    int sum=0;
    printf("number of positive intrgers:\n");
    scanf("%d",&n);
    printf("natural numbers till %d are:\n",n);
    for(i=1;i<=n;i++)
    {
        printf("%d ",i);
    }
    i=1;
    while(i<=n){
        sum=sum+i;
        i++;
    }
    printf("\n %d is sum",sum);
    return 0;
}
