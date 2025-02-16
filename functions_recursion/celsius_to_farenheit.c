#include<stdio.h>
float temp(float n){
    float temp=((n*9/5)+32);
    return temp;
}
    int main()
{
    float n;
    printf("enter temp in degree ");
    scanf("%f",&n);
    printf("temp in farenheit is %f",temp(n));
    return 0;
}
