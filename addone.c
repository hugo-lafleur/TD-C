#include <stdio.h>

int addone(int x){
        x = x + 1;
        return x;
    }

int main(int x){
    printf("%d\n", addone(3));
}