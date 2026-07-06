CC = gcc
LFLAGS = -W -Wall -ansi -pedantic

bubble_sort: bubble_sort.o main.o
	${CC} -o bubble_sort bubble_sort.o main.o

bubble_sort.o: bubble_sort.c 
	${CC} -o bubble_sort.o -c bubble_sort.c ${LFLAGS}

main.o: main.c bubble_sort.h
	${CC} -o main.o -c main.c ${LFLAGS}

clean:
	rm -f *.o bubble_sort