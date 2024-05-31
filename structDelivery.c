/*Explain the concept of nested structure with following example:
Create structure 
product {cost, id, type} and
structure delivery { del_date, del_number, del_type)
*/
#include<stdio.h>
struct Delivery{
  int del_date;
  int del_num;
  char del_type[100];


};
struct product{
  int cost;
  int id;
  char type[100];
  struct Delivery d;

};

int main()
{
  struct product p;
  printf("enter cost of product:\n");
  scanf("%d",&p.cost);
  printf("enter product id:\n");
  scanf("%d",&p.id);
  printf("enter type of product:\n");
  scanf("%s",p.type);
  printf("enter delivery date:\n");
  scanf("%d",&p.d.del_date);
  printf("enter number of delivery:\n");
  scanf("%d",&p.d.del_num);
  printf("enter type of delivery:\n");
  scanf("%s",p.d.del_type);

  printf("Product details\n");
  printf("Cost of product is %d",p.cost);
  printf("\n product id is:%d ",p.id);
  printf("\ntype of product is:%s",p.type);

  printf("\n of delivery:\n");
  printf("delivery date is:%d\n",p.d.del_date);
  printf("number of delivery is %d",p.d.del_num);
  printf("\n type of delivery is:%s",p.d.del_type);
  return 0;
}



