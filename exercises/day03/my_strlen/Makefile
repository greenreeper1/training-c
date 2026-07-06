CC = gcc
CFLAGS = -std=c11 -Wall -Wextra -pedantic

my_strlen: my_strlen.o main.o
	${CC} -o my_strlen my_strlen.o main.o

my_strlen.o: my_strlen.c
	${CC} -o my_strlen.o -c my_strlen.c ${CFLAGS}

main.o: main.c my_strlen.h
	${CC} -o main.o -c main.c ${CFLAGS}

clean:
	rm -f *.o my_strlen