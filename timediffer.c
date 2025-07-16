#include<stdio.h>
#include<stdlib.h>
struct time{
int hour;
int min;
int sec;
};

struct time timediffer(struct time t1,struct time t2){
    struct time t3;
    t3.hour=t1.hour-t2.hour;
    t3.min=t1.min-t2.min;
    t3.sec=t1.sec-t2.sec;

    return t3;
}

int main(){
    struct time t1;
    struct time t2;

    printf("enter the hours of t1 & t2 ");
    scanf("%d%d",&t1.hour,&t2.hour);
    printf("enter miniutes of t1 & t2 ");
    scanf("%d%d",&t1.min,&t2.min);
    printf("enter miniutes of t1 & t2 ");
    scanf("%d%d",&t1.sec,&t2.sec);

    struct time result=timediffer(t1,t2);

    printf("%d hour %d min %d sec ",result.hour,result.min,result.sec);
    return 0;
}