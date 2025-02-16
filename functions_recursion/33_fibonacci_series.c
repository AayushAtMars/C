#include<stdio.h>
int fb(int n);
    int main()
{
    int a;
    printf("enter the number ");
    scanf("%d",&a);
    printf("nth element of fibonanci is %d",fb(a));
    return 0;
}
int fb(int n)
{
    int b=0;
    if(n==0 || n==1){
        return 0;
    }
    else if (n==2){
        return 1;
    }
    else{
        return b+fb(n-1)+fb(n-2);
    }
}