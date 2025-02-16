#include<stdio.h>
    int main()
{
    int i=30;
    int *ptr;
    int **ptr_ptr;
    ptr=&i;
    ptr_ptr=&ptr;
    printf("the value is %d",**ptr_ptr);
    return 0;
}