#include<stdio.h>
int fabo(int n); //declare
int main(){
    int n;
    printf("enter no. of terms req:\n");
    scanf("%d",&n);
    if(n<1){
        printf("enter positive integer");
    }
    else
    {
        fabo(n);   //call
            }
            return 0;
}

int fabo(int n) //define
{
   int first=0,second=1,next,i;
   printf("fabo is: %d %d ",first,second);
   for(i=3;i<=n;i++){
       next=first+second;
       printf("%d ",next);
       first=second;
       second=next;
   }
   
   
   
   
}
