#include <stdio.h>
#include <stdlib.h>
#include "selecao.h"
#include "quickselection.h"
#include "filemanager.h"
#include <time.h>

int main(int argc, char *argv[]) {
    int* vector;
    int size_of_vector,min,max;
    char *file_in;
    double dif;
    clock_t start, end;
    FILE * file;

  /*  if(argc != 3) {
        printf("faltando argumentos \n");
        return 0;
    } */

    file_in = argv[1];
    file = openfile(file_in);
    size_of_vector = get_number_of_elements(file);
    vector = malloc(size_of_vector * sizeof(int));
    reading_file(file, vector);
    min = 0;
    max = size_of_vector;
    
    start = clock();

    quick_selection(vector,min,max);
    print_vector(vector,max);
    end = clock();
    dif = difftime (end,start);
    return 0;
}
