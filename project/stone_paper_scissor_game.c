#include<stdio.h>
#include<stdlib.h>
#include<time.h>
int game(char comp,char you){
    if(you==comp){
        return 0;
    }


    if(you=='r' && comp=='p'){
        return -1;
    }
    else if(you=='r' && comp=='s'){
        return 1;
    }


    if(you=='p' && comp=='s'){
        return -1;
    }
    else if(you=='p' && comp=='r'){
        return 1;
    }


    if(you=='s' && comp=='r'){
        return -1;
    }
    else if(you=='s' && comp=='p'){
        return 1;
    }

}
    int main()
{
    char comp,you;
    srand(time(0));
    int b=rand()%100+1; //rand%(upper limit - lower limit +1) + 1
    if(b<33){
        comp='r';
    }
    else if(b>33 && b<66){
        comp='p';
    }
    else{
        comp='s';
    }
    printf("%d",b);
    printf("enter your choice rock 'r', paper 'p',scissor 's'");
    scanf("%c",&you);
    printf("You chose %c and computer choose %c ",you,comp);
    int r=game(comp,you);
    if(r==0){
        printf("GAME DRAWN");
    }
    else if(r==1){
        printf("YOU WON");
    }
    else{
        printf("YOU LOSE");
    }
    return 0;
}