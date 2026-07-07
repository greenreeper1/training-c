CC = gcc
CFLAGS = -std=c11 -Wall -Wextra -pedantic

table_inversion: table_inversion.o main.o
	${CC} -o table_inversion table_inversion.o main.o

table_inversion.o: table_inversion.c
	${CC} -o table_inversion.o -c table_inversion.c ${CFLAGS}

main.o: main.c table_inversion.h
	${CC} -o main.o -c main.c ${CFLAGS}

clear:
	rm -f *.o table_inversion