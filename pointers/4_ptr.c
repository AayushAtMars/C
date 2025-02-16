#include<stdio.h>
void sumANDavg(int x,int y,float*s,float*avg){
    *s=x+y;
    *avg=(float)(x+y)/2;
}
    int main()
    {
    int b = 5;
    int a = 10;
    float s,avg;
    sumANDavg(a,b,&s,&avg);
    printf("the sum is %f\n",s);
    printf("the avg is %f",avg);
    
    return 0;
}