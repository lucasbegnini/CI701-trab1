
#include "selecao.h"

int minimo(int *vector, int a, int b) {
    int i = a;
    int m = a;

    while (i < b) {
        i++;
        if(vector[i] < vector[m])
            m = i;
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

int *selecao(int *vector, int a, int b) {
    int *vectorOut;
    int min = a;
    int max = b;
    printf("Ordenou por selecao \n");
    vectorOut = ordenar(vector,a,b);
    return vectorOut;
}