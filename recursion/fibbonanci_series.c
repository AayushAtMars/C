#include<stdio.h>
int fib(int n);
    int main()
{
    int n;
    printf("enter the no: ");
    scanf("%d",&n);
    printf("%d",fib(n));
    return 0;
}
int fib(int n){
    int z;
    if(n==0){
        return 0;
    }
    else if(n==1){
        return 1;
    }
    else
        z=fib(n-1)+fib(n-2);
        return z;
}