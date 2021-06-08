#include <stdio.h>
#include <stdlib.h>

#include "point.h"

void print_point(Point * p){
    printf("[%d,%d]\n",p->x,p->y);
}

Point * create_point(int a, int b){
    Point * res = malloc(sizeof(Point));
    res->x = a;
    res->y = b;
    return res;
}

void move(Point * p, int dx, int dy){
    p->x += dx;
    p->y += dy;
}