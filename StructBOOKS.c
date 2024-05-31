//10 books using array
#include<stdio.h>
struct Book{
  char name[100];
  char author[100];
  int price;
};
int main(){
    struct Book b[10];
    int i; 
    printf("enter details of book:\n");
    for(i=0;i<10;i++)
    {
        printf("enter details of %d book",i+1);
        printf("enter title:\n");
        scanf("%s",b[i].name);
        printf("enter author:\n");
        scanf("%s",b[i].author);
        printf("enter price:\n");
        scanf("%d",&b[i].price);
        
    }
    printf("list of 10 books is:\n");
    for(i=0;i<10;i++){
        printf("%d details of book",i+1);
        printf("name:%s\n",b[i].name);
        printf("title:%s\n",b[i].author);
        printf("price:%d\n",b[i].price);
         }
         return 0;
}
