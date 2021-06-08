#include <stdlib.h>
#include <stdio.h>

#include "list.h"

List * liste_vide(){
    List * l = malloc(sizeof(List));
    l->date = NULL;
    l->next = NULL;
    return l;
}

List * insert(Date* d, List * l){
    List * res = malloc(sizeof(List));
    res->date = d;
    res->next = l;
    return res;
}

void print_list(List * l){
    while(l->date){
        print_date(l->date);
        l = l->next;
    }
} 