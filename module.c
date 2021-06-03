#include <stdio.h>
#include <stdlib.h>

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
    while(*s++){
        i++;
    }
    return i;
}

char* stocker(char t[]){
    int n = mylen(t);
    char* s = malloc((n+1)*sizeof(char));
    int i = 0;
    while(t[i]){
        *(s+i) = t[i];
        i++;
    *(s+i) = t[i];
    }
    return s;
}

int nb_e(char* s){
    int i = 0;
    while(*s){
        if(*s == 'e'){
            i++;
        }
        s++;
    }
    return i;
}

char* premier_char_z(char* t){
    char* s;
    s = stocker(t);
    *s = 'z';
    return s;
}

int* liste_vide(){
    int* l = malloc(sizeof(int));
    *l = 0;
    return l;
}

void affiche_liste(int* l){
    printf("l = [ ");
    int n = *l;
    l++;
    for(int i = 0; i<n; i++){
        printf("%d ",*l);
        l++;
    }
    printf("]\n");
}

int* insere_tete(int* l,int x){
    int* m = liste_vide();
    *(m+1) = x;
    *m = *l + 1;
    for(int i = 1; i<=*l; i++){
        *(m+1+i) = *(l+i);
    }
    return m;
}

int* insere_queue(int* l, int x){
    int* m= liste_vide();
    *m = *l + 1;
    for(int i = 1; i<=*l; i++){
        *(m+i) = *(l+i);
    }
    *(m+*m) = x;
    return m;
}

int taille(int * l){
    return *l;
}

int get(int * l, int i){
    if(i<*l){
        l++;
        int j = 0;
        while(j != i){
            l++;
            j++;
        }
        return *l;
    }
}