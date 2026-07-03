CC = gcc
LFLAGS = -W -Wall -ansi -pedantic

min: min.o main.o
	${CC} -o min min.o main.o

min.o: min.c 
	${CC} -o min.o -c min.c ${LFLAGS}

main.o: main.c min.h
	${CC} -o main.o -c main.c ${LFLAGS}

clean: 
	rm -f *.o min