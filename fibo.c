#include <stdio.h>

int fibo(int n){
        int a = 1;
        int b = 1;
        for(int i=1;i<n;i++){
            b = a;
            a = a + b;
        }
        return(a);
}
int main(int n){
    printf("%d\n",fibo(5));
}
    