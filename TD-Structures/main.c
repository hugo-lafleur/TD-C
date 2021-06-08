#include "date.h"
#include "person.h"

int main(){
    Date * d = create_date(27,01,2000);
    print_date(d);

    Person * p = create_person("Hugo","Lafleur",d);
    print_person(p);

    Date * d2 = create_date(27,01,2000);

    Date * d3 = create_date(28,01,2000);


    print_date(d);
    print_date(d2);
    date_egales(d,d2);

    print_date(d);
    print_date(d3);
    date_egales(d,d3);
}