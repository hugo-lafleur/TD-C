#ifndef PERSON
#define PERSON

#include "date.h"

typedef struct _Person{
    char * prenom;
    char * nom;
    Date * bday;
} Person;

Person * create_person(char * prenom, char * nom, Date * bday);
void print_person(Person * p);
Person * duplic_person(Person * p);

#endif