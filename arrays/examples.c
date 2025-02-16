//quick quiz 1

/*#include<stdio.h>
    int main()
{
    int marks[5];
    for(int i=0;i<5;i++){
        printf("enter the marks of student %d ",i+1);
        scanf("%d",&marks[i]);
    }
    for(int j=1;j<=5;j++){
        printf("%d\n",marks[j-1]);
    }
    return 0;
}*/

/*#include<stdio.h>
    int main()
{
    int arr[3] = {1,2,3};
    printf("%d",arr[0]);
    return 0;
}*/


#include<stdio.h>
    int main()
{
    int i[3]={69,70,71};
    int*j=&i[0];`
    int*k=&i[1];
    printf("%d\n",j-k);
    return 0;
}