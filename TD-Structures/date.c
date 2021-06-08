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