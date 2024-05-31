//10 student using array
#include<stdio.h>
struct student{
    
    char name[100];
    int age;
    int id;
};

int main(){
    struct student s[2];
    int i;
    printf("enter details of students\n");
    for(i=0;i<2;i++){
    printf("enter details of student %d \n",i+1);
    printf("enter name:\n");
    scanf("%s",s[i].name);
    printf("enter age:\n");
    scanf("%d",&s[i].age);
    printf("enter id:\n");
    scanf("%d",&s[i].id);
    }
    for(i=0;i<2;i++){
    printf("details of students\n");
    printf("details of student %d\n",i+1);
    printf("name:%s\n",s[i].name);
    printf("age:%d\n",s[i].age);
    printf("id:%d\n",s[i].id);
    
}
return 0;
}
