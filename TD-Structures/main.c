#include <stdio.h>
#include <stdlib.h>

#include "point.h"

int main(){
    point *p = create_point(5,12);

    point *q = create_point(1,2);

    print_point(p);
    print_point(q);

    move(p,1,0);
    print_point(p);
}