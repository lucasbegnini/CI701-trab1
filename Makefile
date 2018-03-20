all : ordena

ordena:	clean main.o quickselection.o
	gcc	-o ordena main.o quickselection.o selecao.o

main.o:	main.c quickselection.h
	gcc	-o main.o main.c -c -W -Wall -ansi -pedantic

selecao.o:	selecao.c
	gcc	-o selecao.o selecao.c -c -W -Wall -ansi -pedantic

quickselection.o: selecao.o quickselection.c 
	gcc	-o quickselection.o quickselection.c -c -W -Wall -ansi -pedantic -lm

clean:
	rm	-rf	*.o ordena teste.out