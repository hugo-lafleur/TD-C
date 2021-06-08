#ifndef POINT
#define POINT

typedef struct _point{
    int x;
    int y;
} point;

void print_point(point * p);
point * create_point(int a, int b);
void move(point * p, int dx, int dy);

#endif