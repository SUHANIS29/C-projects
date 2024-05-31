//state wether 3 points lies in a straight line
#include<stdio.h>
int main()
{
  int x1,x2,x3,y1,y2,y3,slope1,slope2;
  printf("enter x1 and y1 \n",x1,y1);
  scanf("%d%d",&x1,&y1);
  printf("enter x2 and y2 \n",x2,y2);
  scanf("%d%d",&x2,&y2);
  printf("enter x3 and y3 \n",x3,y3);
  scanf("%d%d",&x3,&y3);
  //printf("Enter 3 points");//
  //scanf("(%d%d),(%d%d),(%d%d)"(,&x1,&y1)(,&x2,&y2)(,&x3,&y3));//
  slope1=(y2-y1)/(x2-x1);
  slope2=(y3-y2)/(x3-x2);
  if (slope1=slope2)
  {
    printf("points are in straight line");
  }
  else{
    printf("points are  not in straight line");
  }
  return 0;
}
