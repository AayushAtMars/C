#include<stdio.h>
    int main()
{
   int arr[10]={1,2,3,4,5,6,7,8,9,10};
    int*ptr=&arr[0];
    printf("%u\n",&arr[2]);
    printf("%u",ptr+2);
    return 0;
}