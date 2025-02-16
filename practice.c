#include<stdio.h>
int main(){
    int cp,sp;
    printf("enter cost price: ");
    scanf("%d",&cp);
    printf("enter selling price: ");
    scanf("%d",&sp);

    if(cp>sp){
        printf("loss of %d",cp-sp);
    }
    if(cp<sp){
        printf("profit of %d",sp-cp);
    }
    else{
        printf("same");
    }
    return 0;
}