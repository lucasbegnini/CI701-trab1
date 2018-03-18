#include <stdio.h>
#include <stdlib.h>

int *reading_file(const char *file_in) {
    int *vector;
    printf("abrindo arquivo %s \n", file_in);

    FILE *file = fopen( file_in,"r");
    if(file == 0) {
        printf ("Falha ao abri o arquivo");
        fclose(file);
        return 0;
    }


    int x;
    int count = 0;
    while( fscanf(file, "%d \n", &x) != EOF ) {
        count++;
    }
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

int main(int argc, char *argv[]) {

    if(argc != 2) {
        printf("faltando argumentos \n");
        return 0;
    }
    int *vector;
    vector = reading_file(argv[1]);

    int x;
    int size_of_vector =sizeof (vector) - 2;
    
    for(x = 0; x < size_of_vector ; x++)
        printf("valor do vector %d \n", vector[x]);

    return 0;
}