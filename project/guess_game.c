#include<stdio.h>
#include<stdlib.h>
#include<time.h>
    int main()
    {
        int number,guess,nguesses=1;
        srand(time(0));
        number=rand()%100+1;
        printf("the number is %d\n",number);
        do{
            printf("guess the number between 1 to 100  ");
            scanf("%d",&guess);
            if (guess>number){
                printf("smaller number please  ");
            }
            else if(guess<number){
                printf("higher no please  ");
            }
            else{
                printf("you guessed the no in %d",nguesses);
            }
            nguesses++;
        }
        while(guess!=number);
    return 0;
    }