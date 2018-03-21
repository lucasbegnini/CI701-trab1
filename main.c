#include <stdio.h>
#include <stdlib.h>
#include "selecao.h"
#include "quickselection.h"
#include "filemanager.h"

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