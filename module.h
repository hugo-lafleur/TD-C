#ifndef MODULE
#define MODULE

int addone(int x);
int fibo(int x);
void print_tableau(int n, int t[]);
void sum(int n, int t[], int u[]);
int mylen(char s[]);
int compare_chaines(char s[], char u[]);
void print_chaine(char s[]);
void affiche_chaine();
int nb_uns(int n);
int length(char *s);
char* stocker(char t[]);
int nb_e(char* s);
char* premier_char_z(char* t);
int* liste_vide();
void affiche_liste(int* l);
int taille(int* l);
int* insere_tete(int* l,int x);
int* insere_queue(int* l, int x);
int get(int * l, int i);

#endif