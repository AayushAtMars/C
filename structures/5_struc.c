#include<stdio.h>
typedef struct complex_no{
    int real;
    int img;
}comp;

void display(comp cno){
        printf("real no is %d\n",cno.real);
        printf("imaginary no is %d\n",cno.img);
    }
    int main()
{
    comp cno[5];
    for(int i=0;i<5;i++){
        printf("enter the real %d no: ",i+1);
        scanf("%d",&cno[i].real);

        printf("enter the imaginary %d no: ",i+1);
        scanf("%d",&cno[i].img);
    }
    for(int i=0;i<5;i++){
        display(cno[i]);
    }
    return 0;
}