bmi: bmi.o main.o
	gcc -o bmi bmi.o main.o

bmi.o: bmi.c 
	gcc -o bmi.o -c bmi.c -W -Wall -ansi -pedantic

main.o: main.c bmi.h
	gcc -o main.o -c main.c -W -Wall -ansi -pedantic