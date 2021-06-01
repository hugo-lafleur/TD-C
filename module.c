#include <stdio.h>

int addone(int x){
        x = x + 1;
        return x;
}

int fibo(int n){
        int a = 1;
        int b = 0;
        int c = 0;
        for(int i=1;i<n;i++){
            c = b;
            b = a;
            a = a + c;
        }
        return a;
}

void print_tableau(int n, int t[n]){
    printf("[");
    for(int i=0;i<n;i++){
        printf("%d ",t[i]);
    }
    printf("]\n");
}