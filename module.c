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

void print_tableau(int n, int t[]){
    printf("[ ");
    for(int i=0;i<n;i++){
        printf("%d ",t[i]);
    }
    printf("]\n");
}

void sum(int n, int t[], int u[]){
    int res[n];
    printf("[ ");
    for(int i = 0; i<n; i++){
        res[i] = t[i] + u[i];
        printf("%d ",res[i]);
    }
    printf("]\n");
}

int mylen(char s[]){
    int res = 0;
    while(s[res]){
        res ++;
    }
    return res;
}