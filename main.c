#include "module.h"
#include <stdio.h>
#include <string.h>

int main(){
    /*int a = 5;
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
    int tab1[5] = {1,2,3,4,5};
    int tab2[5] = {6,7,8,9,10};
    printf("tab1 = ");
    print_tableau(5,tab1);
    printf("tab2 = ");
    print_tableau(5,tab2);
    printf("tab1 + tab2 =");
    sum(5,tab1,tab2);
    char s[] = "abcde";
    printf("s = ");
    print_chaine(s);
    printf("mylen(s) = %d\n",mylen(s));
    char u[] = "abcde";
    printf("u = ");
    print_chaine(u);
    printf("Comparaison de s et u : ");
    printf("%d\n",compare_chaines(s,u));
    affiche_chaine();
    printf("Le nombre de 1 dans la représentation binaire de 5 est : ");
    printf("%d\n",nb_uns(5));*/
    char* s = "abcdef";
    printf("s = ");
    print_chaine(s);
    printf("length(s) = %d\n",length(s));
    char t[] = "abcdef";
    print_chaine(stocker(t));
    char* b = "eeaeeeae";
    printf("b = ");
    print_chaine(b);
    printf("Le nombres de e dans b est : %d\n",nb_e(b));
}