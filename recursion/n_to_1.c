#include<stdio.h>
void recur(int n);
    int main()
{
    int a;
    printf("enter the number ");
    scanf("%d",& a);
    recur(a);
}
void recur(int n){
    if(n==0){
        return;
    }
    printf("%d\n",n);
    recur(n-1);
    return;
}


// #include<stdio.h>
// void recur(int x,int n);
//     int main()
// {
//     int n;
//     printf("enter the number ");
//     scanf("%d",& n);
//     recur(1,n);
// }
// void recur(int x,int n){
//     if(x>n){
//         return;
//     }
//     printf("%d\n",x);
//     recur(x+1,n);
//     return;
// }