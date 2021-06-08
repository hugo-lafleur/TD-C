#include "point.h"
#include "triangle.h"

int main(){
    Point *p = create_point(5,12);
    Point *q = create_point(1,2);
    Point *r = create_point(10,10);

    print_point(p);
    print_point(q);

    Triangle *t = create_triangle(p,q,r);

    print_triangle(t);

    move(p,1,0);

    print_triangle(t);
}