CC = gcc
CFLAGS = -std=c11 -Wall -Wextra -pedantic

my_memcpy: my_memcpy.o main.o
	${CC} -o my_memcpy my_memcpy.o main.o

my_memcpy.o: my_memcpy.c
	${CC} -o my_memcpy.o -c my_memcpy.c ${CFLAGS}

main.o: main.c my_memcpy.h
	${CC} -o main.o -c main.c ${CFLAGS}

clean:
	rm -f *.o my_memcpy