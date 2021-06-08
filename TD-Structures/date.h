#ifndef DATE
#define DATE

typedef struct _Date{
    int day;
    int month;
    int year;
} Date;

Date * create_date(int day, int month, int year);
void print_date(Date * d);
int date_egales(Date * d1, Date * d2);
Date * duplic_date(Date * d);

#endif