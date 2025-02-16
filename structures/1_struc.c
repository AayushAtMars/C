#include<stdio.h>
typedef struct vector{
    int x;
    int y;
}v;
    int main()
{
    v v1,v2;
    v1.x=35;
    v2.y=56;
    printf("DIM of X is %d and DIM of Y is %d",v1.x,v1.y);
    return 0;
}