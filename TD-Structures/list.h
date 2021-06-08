#ifndef LIST
#define LIST

#include "date.h"

typedef struct _List{
    Date * date;
    struct _List * next;

} List;

List * liste_vide();
List * insert(Date* d, List * l);
void print_list(List * l);

#endif