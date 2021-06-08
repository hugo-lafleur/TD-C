
all: main

date.o: date.h date.c
	gcc -c date.c

main.o: main.c
	gcc -c main.c

main: main.o date.o
	gcc -o main main.o date.o

clean:
	rm -f *.o ./main