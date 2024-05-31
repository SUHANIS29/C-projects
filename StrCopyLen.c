//WAP to find length and copy string
#include<stdio.h>
#include<string.h>
void len(char str1[100])
{
    int length;
    length=strlen(str1);
    printf("length of string is %d \n",length);
}
void copy(char str2[100],char str1[100])
{
    strcpy(str2,str1);
    printf("copied string is:%s",str2);
}
int main()
{
    char str1[100];
    char str2[100];
    printf("enter string 1:\n");
    scanf("%s",str1);
    len(str1);
    copy(str2,str1);
    return 0;
}
