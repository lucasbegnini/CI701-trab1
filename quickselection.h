#ifndef QUICKSELECTION_H
#define QUICKSELECTION_H
#include <stdio.h>
#include "selecao.h"

int *quick_selection(int *vector, int a, int b);
int particiona(int *vector, int a, int b, int vb);

#endif