#include <stdio.h>

int main(){
    int day;
    printf("enter days: ");
    scanf("%d",&day);

    int year = day/360;
    int rem_day = day%360;
    int month = rem_day/30;
    int day_l = rem_day%30;

    printf("%d years %d months %d days",year,month,day_l);
}
