#ifndef FILEMANAGER_H
#define FILEMANAGER_H
#include <stdio.h>
#include <stdlib.h>

int reading_file(const char *file_in, int * vector);
int get_number_of_elements(const char *file_in);
int save_vector_file(const char *file_out, int*vector, int min, int max);

#endif