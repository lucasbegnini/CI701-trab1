
#include "selecao.h"

int minimo(int *vector, int a, int b) {
    int m;
    if (a == b)
        return a;
    m = minimo(vector,a,b-1);
    if ( vector[b] < vector[m]) {
        m = b;
    }

    return m;
}

int troca(int *vector, int posicaoAntiga, int posicaoNova) {
    int aux = 0;
    aux = vector[posicaoAntiga];
    vector[posicaoAntiga] = vector[posicaoNova];
    vector[posicaoNova] = aux;
    return 0;
}

int * ordenar(int *vector, int a, int b) {
    if (a >= b)
        return vector;
    troca(vector,a,minimo(vector,a,b));
    return ordenar(vector, a+1, b);
}

int selecao(int *vector, int a, int b) {
    ordenar(vector,a,b);
    return 0;
}