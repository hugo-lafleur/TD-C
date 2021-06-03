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
    for(int i = 0; i<n; i++){
        res[i] = t[i] + u[i];
    }
    print_tableau(n,res);
}

int mylen(char s[]){
    int res = 0;
    while(s[res]){
        res ++;
    }
    return res;
}

int compare_chaines(char s[], char u[]){
    int i = 0;
    while(s[i] && u[i]){
        if(s[i] < u[i]){
            return -1;
        }
        if(s[i] < u[i]){
            return 1;
        }
        i++;
        
    }
    if(mylen(s) < mylen(u)){
        return -1;
    }
    if(mylen(u) < mylen(s)){
        return 1;
    }
    return 0;
}

void print_chaine(char s[]){
    int n = mylen(s);
    printf("\"");
    int i = 0;
    while(s[i]){
        printf("%c",s[i]);
        i++;
    }
    printf("\"\n");
}

void affiche_chaine(){
    char buffer[100];
    printf("Veuillez saisir la chaîne à afficher : \n");
    scanf( "%[^\n]", buffer );
    print_chaine(buffer);
}

int nb_uns(int n){
    int i = n;
    int res = 0;
    while(i){
        if(i%2 == 1){
            res ++;
        }
        i >>= 1;
    }
    return res;
}

int length(char* s){
    int i = 0;
    while(*(s+i)){
        i++;
    }
    return i;
}