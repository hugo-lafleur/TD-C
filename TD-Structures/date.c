#include <stdlib.h>
#include <stdio.h>

#include "date.h"

Date * create_date(int day, int month, int year){
    Date *d = malloc(sizeof(Date));
    d->day = day;
    d->month = month;
    d->year = year;
    return d;
}

void print_date(Date * d){
    printf("%02d/%02d/%02d\n",d->day,d->month,d->year);
}

int date_egales(Date * d1, Date * d2){
    if(d1->day == d2->day & d1->month == d2->month & d1->year == d2->year){
        printf("Les dates sont égales\n");
    }
    else{
        printf("Les dates ne sont pas égales\n");
    }
}

Date * duplic_date(Date * d){
    Date * res = malloc(sizeof(Date));
    res->day = d->day;
    res->month = d->month;
    res->year = d->year;
    return res;
}