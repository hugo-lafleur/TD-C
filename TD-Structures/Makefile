
all: main

date.o: date.h date.c
	gcc -c date.c

person.o: person.h person.c
	gcc -c person.c

list.o: list.h list.c
	gcc -c list.c

main.o: main.c
	gcc -c main.c

main: main.o date.o person.o list.o
	gcc -o main main.o date.o person.o list.o

clean:
	rm -f *.o ./main