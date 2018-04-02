#include "filemanager.h"

int reading_file(const char *file_in,int *vector) {
    int count = 0;
    FILE* file;

    file = fopen( file_in,"r");
    while( fscanf(file, "%d \n", &vector[count]) != EOF ) {
        count++;
    }
    fclose(file);

    return 0;
}
int get_number_of_elements(const char *file_in) {
    FILE* file;
    int count = 0,x;
    file = fopen(file_in,"r");
    
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
    fclose(file);

    return count;
}
int save_vector_file(const char *file_out, int*vector, int min, int max) {
    FILE* file;
    int i;
    char* clean_char;
    clean_char = "";
    file = fopen( file_out,"w+");
    fprintf(file, clean_char);
    fclose(file);
    file = fopen( file_out,"a");
    for (i = min; i < max ; i++) {
        fprintf(file,"%d \n", vector[i]);
    }
    fclose(file);
    printf("salvou o arquivo %s com sucesso \n", file_out);
    return 0;
}