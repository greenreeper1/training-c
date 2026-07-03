max: max.o main.o
	gcc -o max max.o main.o

max.o: max.c
	gcc -o max.o -c max.c -W -Wall -ansi -pedantic

main.o: main.c max.h
	gcc -o main.o -c main.c -W -Wall -ansi -pedantic