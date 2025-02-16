#include<stdio.h>

int isPalindrome(int x) {
    int temp=x;
    int sum=0;
    int rem;
    while(temp>0){
        rem=temp%10;
        sum=(sum*10)+(rem);
        temp=temp/10;
    }   
    if(x==sum){
        //return 1;
        printf("true");
    }
    else{
        //return 0;
        printf("false");
    }
}
int main(){
    int x= -121;
    isPalindrome(x);
    //printf("%d",a);
    return 0;
}