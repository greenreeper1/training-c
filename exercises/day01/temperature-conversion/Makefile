temperature: temperature.o main.o
	gcc -o temperature temperature.o main.o

temperature.o: temperature.c
	gcc -o temperature.o -c temperature.c -W -Wall -ansi -pedantic

main.o: main.c temperature.h
	gcc -o main.o -c main.c -W -Wall -ansi -pedantic