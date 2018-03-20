#include <stdio.h>
#include <stdlib.h>
#include "selecao.h"
#include "quickselection.h"

int* reading_file(const char *file_in) {
    int *vector;
    int x;
    int count = 0;
    FILE* file;

    printf("abrindo arquivo %s \n", file_in);

    file = fopen("text1.txt","rw");
    if(file == 0) {
        printf ("Falha ao abri o arquivo \n");
        fclose(file);
        return 0;
    } else {
        printf("Arquivo aberto com sucesso \n");
    }

    while( fscanf(file, "%d \n", &x) != EOF ) {
        count++;
    }
    printf("numeros de elementos no vector %d \n",count);
    fclose(file);    

    vector = (int *) malloc(count * sizeof(int));
		    
    count = 0;
    file = fopen( file_in,"r");
    while( fscanf(file, "%d \n", &vector[count]) != EOF ) {
        count++;
    }
    fclose(file);

    return vector;
}

int save_vector_file(const char *file_out, int*vector, int min, int max) {
    FILE* file;
    int i;
    file = fopen( file_out,"w+");
    fprintf(file, "");
    fclose(file);
    file = fopen( file_out,"a");
    for (i = min; i < max ; i++) {
        fprintf(file,"%d \n", vector[i]);
    }
    fclose(file);
    printf("salvou o arquivo %s com sucesso \n", file_out);
}

int main(int argc, char *argv[]) {
    int* vector;
    int size_of_vector,min,max;
    char *file_out;

    if(argc != 3) {
        printf("faltando argumentos \n");
        return 0;
    }

    file_out = argv[2];
    vector = reading_file(argv[1]);

    size_of_vector =sizeof (vector) - 2;
    min = 0;
    max = size_of_vector;

    quick_selection(vector,min,max);

    save_vector_file(file_out,vector, 0, max);
    return 0;
}