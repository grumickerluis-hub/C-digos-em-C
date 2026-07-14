#include <stdio.h>
#include "mult_matrizes.h"

void solicitar_matrizes(int M[2][2], int N[2][2]) {
    printf("Digite os valores da matriz M:\n");

    for (int i = 0; i < 2; i++) {
        for(int j = 0; j < 2; j++) {
            printf("M[%d][%d]: ", i, j);
            scanf("%d", &M[i][j]);
        }
    }

    printf("Digite os valores da matriz N:\n");

    for (int i = 0; i < 2; i++) {
        for(int j = 0; j < 2; j++) {
            printf("N[%d][%d]: ", i, j);
            scanf("%d", &N[i][j]);
        }
    }
}

void mult_matrizes(int M[2][2], int N[2][2], int L[2][2]) {
    for (int i = 0; i < 2; i++) {
        for(int j = 0; j < 2; j++) {
            L[i][j] = 0;

            for(int k = 0; k < 2; k++) {
                L[i][j] += M[i][k] * N[k][j];
            }
        }
    }
}

void imprimir_resultado(int L[2][2]) {
    printf("Matriz Resultante:\n");

    for(int i = 0; i < 2; i++) {
        for(int j = 0; j < 2; j++) {
            printf("%d ", L[i][j]);
        }
        printf("\n");
    }
}