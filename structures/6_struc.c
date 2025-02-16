#include<stdio.h>
typedef struct date{
    int day;
    int month;
    int year;
}d;
int show(d date){
    printf("date is %d/%d/%d\n",date.day,date.month,date.year);
}

int comp(d d1,d d2){
    if(d1.year>d2.year){
        return 1;
    }
    if(d1.year<d2.year){
        return -1;
    }

    if(d1.month>d2.month){
        return 1;
    }
    if(d2.month<d2.month){
        return -1;
    }

    if(d1.day>d2.day){
        return 1;
    }
    if(d1.day<d2.day){
        return -1;
    }
    else{
        return 0;
    }
}
    int main()
{
    d date1={13,8,2005};
    d date2={13,8,2005};                    
    show(date1);
    show(date2);

    int a=comp(date1,date2);
    printf("%d",a);
    return 0;
}