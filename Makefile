all : ordena

ordena:	clean main.o
	gcc	-o ordena main.o

main.o:	main.c
	gcc	-o main.o main.c -c -W -Wall -ansi -pedantic

clean:
	rm	-rf	*.o ordena