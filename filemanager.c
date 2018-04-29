#include "filemanager.h"

int reading_file(FILE * file,int *vector) {
    int count = 0;
    fseek(file,0,SEEK_SET);

    while( fscanf(file, "%d \n", &vector[count]) != EOF ) {
        count++;
    }

    return 0;
}
int get_number_of_elements(FILE * file) {

    int count = 0,x;

    while( fscanf(file, "%d \n", &x) != EOF ) {
        count++;
    }

    return count;
}

int print_vector(int * vector, int size)
{
    int i;
    for (i = 0; i < size; i++) {
        printf("%d \n",vector[i]);
    }
}

FILE * openfile(const char *file_in) {
    FILE* file;
    file = freopen(file_in,"r",stdin);
    
    if(file == 0) {
        printf ("Falha ao abri o arquivo \n");
        fclose(file);
        return 0;
    }
    return file;
}