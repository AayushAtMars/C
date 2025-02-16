#include<stdio.h>
int force(float m);
    int main()
{
    float m;
    printf("enter the mass5");
    scanf("%f",&m);
    printf("force is %d",force(m));
    
    return 0;
}
int force(float m)
{
    float f;
    f=(m*9.8);
    return f;
}