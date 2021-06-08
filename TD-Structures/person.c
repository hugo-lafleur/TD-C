#include <stdlib.h>
#include <stdio.h>

#include "date.h"
#include "person.h"

Person * create_person(char * prenom, char * nom, Date * bday){
    Person * p = malloc(sizeof(Person));
    p->bday = bday;
    p->nom = nom;
    p->prenom = prenom;
    return p;
}

void print_person(Person * p){
    printf("Prénom : %s\n",p->prenom);
    printf("Nom : %s\n",p->nom);
    printf("Date de naissance : ");
    print_date(p->bday);
}

Person * duplic_person(Person * p){
    Person * res = malloc(sizeof(Person));
    res->prenom = p->prenom;
    res->nom = p->nom;
    res->bday = p->bday;
    return res;
}