// single step,double step
#include<stdio.h>
int ways(int n);
    int main()
{
    int n;
    printf("enter the no of stairs : ");
    scanf("%d",&n);
    printf("no of ways are %d",ways(n));
    return 0;
}
int ways(int n){
    if(n==1){
        return 1;
    }
    else if(n==2){
        return 2;
    }
    int z=ways(n-1)+ways(n-2);
    return z;
}