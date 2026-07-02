calculator: calculator.o main.o
	gcc -o calculator calculator.o main.o

calculator.o: calculator.c
	gcc -o calculator.o -c calculator.c -W -Wall -ansi -pedantic

main.o: main.c calculator.h
	gcc -o main.o -c main.c -W -Wall -ansi -pedantic