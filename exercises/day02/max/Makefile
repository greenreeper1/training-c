CC = gcc
LFLAGS = -W -Wall -ansi -pedantic

max: max.o main.o
	${CC} -o max max.o main.o

max.o: max.c 
	${CC} -o max.o -c max.c ${LFLAGS}

main.o: main.c max.h
	${CC} -o main.o -c main.c ${LFLAGS}

clean:
	rm -f *.o max