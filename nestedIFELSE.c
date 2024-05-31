#include<stdio.h>
int main()
{
    int a,b,c;
    printf("Enter three numbers:",a,b,c);
    scanf("%d%d%d",&a,&b,&c);

    if(a>b)
    {
        if(a>c)
        {
            printf("%d is the greater number\n",a);
        }
        else
        {
            printf("%d is the greater number\n",c);
        }
    }

   else
       {
        if (b>c)
        {
            printf("%d is the greater number\n",b);

        }
        else
        {
            printf("%d is the greater number\n",c);
        }
        
       } 
    return 0;
}
