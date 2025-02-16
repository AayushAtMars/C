#include<stdio.h>
void count(int arr[],int n){
    int a=0;
    for(int i=0;i<n;i++){
        if(arr[i]>0){
            a++;
        }
    }
     printf("%d",a);
}
    int main()
{
    int arr[10]={0,1,-2,-3,-4,5,-6,7,8,-9};
    count(arr,10);
    return 0;
}