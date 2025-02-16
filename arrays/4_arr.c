#include<stdio.h>
void rev(int arr[],int n){
//void rev(int *arr,int n){
    int arr1[n];
    for(int i=0;i<n;i++){
        arr1[i]=arr[n-i-1];
    }
    for(int i=0;i<n;i++){
        printf("%d ",arr1[i]);
    }
}
    int main()
{
    int arr[5]={1,2,3,4,5};
    rev(arr,5);
    
    return 0;
}