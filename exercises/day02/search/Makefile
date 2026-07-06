CC = gcc
LFLAGS = -W -Wall -ansi -pedantic

search: search.o main.o
	${CC} -o search search.o main.o

search.o: search.c
	${CC} -o search.o -c search.c ${LFLAGS}

main.o: main.c search.h
	${CC} -o main.o -c main.c ${LFLAGS}

clean:
	rm -f *.o search