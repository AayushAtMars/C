//       *
//      **
//     * *
//    *  *
//   *   *
//  *    *
// *******

#include<stdio.h>
    int main()
{
    int i,j,k,l;
    for(i=1;i<=7;i++){
        for(j=1;j<=7-i;j++){
            printf(" ");
        }
        for(k=1;k<=i;k++){
            if(i==1 || i==7 || k==1 ||k==i){
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