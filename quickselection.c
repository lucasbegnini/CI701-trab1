
#include "quickselection.h"

int particiona(int *vector, int p, int q) {
    int x, i,j;
    x = vector[p];
    i = p;
    for (j = p+1; j< q; j++) {
        if (vector[j] <= x) {
            i = i+1;
            troca(vector,i,j);
        }
    }
    troca(vector,p,i);
    return i;
}

int *quick_selection(int *vector, int a, int b) {
    int m;
    if ( a < b) {
    m = particiona(vector,a,b);
    
    quick_selection(vector,a,m-1);
    quick_selection(vector,m+1,b);
    return vector;

    }
}