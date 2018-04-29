#ifndef FILEMANAGER_H
#define FILEMANAGER_H
#include <stdio.h>
#include <stdlib.h>

int reading_file(FILE * file, int * vector);
int get_number_of_elements(FILE * file);
int print_vector(int * vector, int size);
FILE * openfile(const char *file_in);

#endif