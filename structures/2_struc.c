#include<stdio.h>
struct vector{
    int x;
    int y;
};

struct vector sumvector(struct vector v1,struct vector v2){
    struct vector result;
    result.x=v1.x+v2.x;
    result.y=v1.y+v2.y;
    return result;
}

    int main()
{
    struct vector v1,v2,sum;

    v1.x=35;
    v1.y=44;
    printf("the dim of x is %d and y dim of y is %d\n\n",v1.x,v1.y);  

    v2.x=44;
    v2.y=35;
    printf("the dim of x is %d and y dim of y is %d\n\n",v2.x,v2.y); 

    sum=sumvector(v1,v2);
    printf("result of x dim is %d and result of y dim is %d",sum.x,sum.y); 
    return 0;
}