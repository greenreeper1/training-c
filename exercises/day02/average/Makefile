CC = gcc
CFLAGS = -W -Wall -ansi -pedantic

average: average.o main.o
	${CC} -o average average.o main.o

average.o: average.c
	${CC} -o average.o -c average.c ${CFLAGS}

main.o: main.c average.h
	${CC} -o main.o -c main.c ${CFLAGS}

clean: 
	rm -rf *.o average