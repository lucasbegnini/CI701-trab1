#include <stdio.h>
#include <stdlib.h>
#include "selecao.h"
#include "quickselection.h"
#include "filemanager.h"
#include <time.h>

int main(int argc, char *argv[]) {
    int* vector;
    int size_of_vector,min,max;
    char *file_out, *file_in;
    double dif;
    clock_t start, end;

    if(argc != 3) {
        printf("faltando argumentos \n");
        return 0;
    }

    file_in = argv[1];
    file_out = argv[2];

    size_of_vector = get_number_of_elements(file_in);
    vector = malloc(size_of_vector * sizeof(int));
    reading_file(file_in,vector);
    printf("numeros de elementos no vector %d \n",size_of_vector);
    min = 0;
    max = size_of_vector;
    
    start = clock();

    quick_selection(vector,min,max);
    
    end = clock();
    dif = difftime (end,start);
    printf ("A ordenacao demorou %f .\n", dif );
    save_vector_file(file_out,vector, 0, max);
    return 0;
}
