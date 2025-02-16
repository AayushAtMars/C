#include<stdio.h>
    int main()
{
    int n=3;
    int m=5;
    int marks[3][5];
    for(int k=0;k<3;k++){
        for(int l=0;l<5;l++){
            printf("enter the marks of student %d in subject %d\n",k+1,l+1);
            scanf("%d",&marks[k][l]);
        }
    }
    for(int m=0;m<3;m++){
        for(int n=0;n<5;n++){
            printf("the marks of student %d in subject %d is %d\n",m+1,n+1,marks[m][n]);
        }
    }
    return 0;
}