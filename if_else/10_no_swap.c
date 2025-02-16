#include<stdio.h>
    int main()
{
    int a=2,b=4,c;
    c=b;
    b=a;
    a=c;
    printf("the value of a is%d\n",a);
    printf("the value of b is%d\n",b);
    return 0;
}