#include<stdio.h>
void multable(int arr[],int n,int num){
    printf("the table of %d is :\n",n);
    for(int i=0;i<num;i++){
        arr[i]=n*(i+1);
    }
    for(int i=0;i<num;i++){
        printf("%d X %d = %d\n",n,(i+1),arr[i]);
}
printf("**************************************\n\n");
}
    int main()
{
    int arr[3][10];
    multable(arr[0],2,20);
    multable(arr[1],7,20);
    multable(arr[2],9,20);
    
    return 0;
}