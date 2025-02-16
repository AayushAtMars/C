#include<stdio.h>
    int main()
{
    int a,i=1,b=0;
    printf("enter the no ");
    scanf("%d",&a);
    for(a;i<11;i++){
        b=b+a*i;
    }
    printf("the sum is %d",b);
    return 0;
}