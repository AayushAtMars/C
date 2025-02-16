#include<stdio.h>
void ptr(int i){
    int*k=&i;
    printf("the address of variable inside the function %u",k);
}
    int main()
{
    int i;
    int *j=&i;
    printf("the address of variable outside function is %u\n",j);
    ptr(i);
    return 0;
}