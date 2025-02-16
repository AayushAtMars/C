#include<stdio.h>
int power(int a,int n);
    int main()
{
    int n,a;
    printf("enter the number : ");
    scanf("%d",&a);
    printf("enter the power : ");
    scanf("%d",&n);
    printf("%d",power(a,n));
    return 0;
}

int power(int a,int n){
    int z;
    if (n==0){
        return 1;
    }
    else
    z=a*power(a,n-1);
    return z;
}