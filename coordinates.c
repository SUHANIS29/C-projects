#include<stdio.h>
struct point{
    int x;
    int y;
    
};
int main(){
    struct point p;
    printf("enter value of x & y:\n");
    scanf("%d%d",&p.x,&p.y);
    printf("coordinates of p(x,y) is p(%d,%d)",p.x,p.y);
    return 0;
    
}
