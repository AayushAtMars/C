#include<stdio.h>
float temp(float c);
    int main()
{
    float a;
    printf("enter the temp in degree celsius ");
    scanf("%f",&a);
    printf("the temp in farenhiet is %f",temp(a));
    return 0;
}
float temp(float c)
{
    float d;
    d=(c*9/5)+32;
    return d;
}