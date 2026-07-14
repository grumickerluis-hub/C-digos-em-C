#include <stdio.h>
#include "mult_matrizes.h"

int main() {

    int M[2][2];
    int N[2][2];
    int L[2][2];
    
    solicitar_matrizes(M, N);

    mult_matrizes(M, N, L);

    imprimir_resultado(L);

    return 0;
}