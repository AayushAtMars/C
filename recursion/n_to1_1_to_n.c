#include<stdio.h>
void recur(int n){
    if(n==0){
        return;
    }
    printf("%d\n",n);
    recur(n-1);
    printf("%d\n",n);
    return;
}
int main()
{
    int a;
    printf("enter the number ");
    scanf("%d",& a);
    recur(a);
}