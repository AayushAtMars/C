#include<stdio.h>
    int main()
{
    int i,j,k;
    for(i=1;i<=6;i++){
        for(j=1;j<=i-1;j++){
            printf(" ");
        }
        for(k=1;k<=6;k++){
            if(i==1 || i==6 || k==1 || k==6){
                printf("*");
            }
            else{
                printf(" ");
            }
        }
        printf("\n");
    }
    return 0;
}