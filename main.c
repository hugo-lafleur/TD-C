#include "module.h"
#include <stdio.h>

int main(){
    int a = 5;
    printf("Hello World\n");
    printf("%d\n",a);
    for(int i=1;i<11;i++){
        printf("%d ",i);
    }
    printf("\n");
    printf("addone(5) = %d\n",addone(5));
    printf("fibonnaci(5) = %d\n",fibo(2));
    int t[51];
    for(int i=0;i<51;i++){
       t[i] = 2*i;
    }
    print_tableau(51,t);
}