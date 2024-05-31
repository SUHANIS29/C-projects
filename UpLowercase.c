#include<stdio.h>
//check wether entered letter is uppercase or lowercae
void main()
{
    char a,z,A,Z;
    printf("Enter any letter:",a);
    scanf("%c",&a);

    if(a>='A' && a<='Z')
    {
        printf("the letter is in upper case");
    }
    else if (a>='a' && a<='z')
    {
        printf("the letter is in lower case");
    }
    else
    {
        printf("Enter a valid letter");
    }
    
}
