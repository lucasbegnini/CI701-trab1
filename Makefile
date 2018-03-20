all : ordena

ordena:	clean main.o selecao.o
	gcc	-o ordena main.o selecao.o

main.o:	main.c selecao.h
	gcc	-o main.o main.c -c -W -Wall -ansi -pedantic

selecao.o:	selecao.c
	gcc	-o selecao.o selecao.c -c -W -Wall -ansi -pedantic

clean:
	rm	-rf	*.o ordena teste.out