#include <stdio.h>
#include <stdlib.h>

#include "point.h"

void print_point(point * p){
    printf("[%d,%d]\n",p->x,p->y);
}

point * create_point(int a, int b){
    point * res = malloc(sizeof(point));
    res->x = a;
    res->y = b;
    return res;
}

void move(point * p, int dx, int dy){
    p->x += dx;
    p->y += dy;
}