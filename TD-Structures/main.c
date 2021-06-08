#include "date.h"
#include "person.h"

int main(){
    Date * d = create_date(27,01,2000);
    print_date(d);

    Person * p = create_person("Hugo","Lafleur",d);
    print_person(p);
}