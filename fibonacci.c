#include <stdio.h>
#include "fibonacci.h"

void calcularFibonacci(int vetor[], int n)
{
    if (n >= 1)
        vetor[0] = 0;

    if (n >= 2)
        vetor[1] = 1;

    for (int i = 2; i < n; i++)
    {
        vetor[i] = vetor[i - 1] + vetor[i - 2];
    }
}

void imprimirFibonacci(int vetor[], int n)
{
    printf("Sequencia de Fibonacci:\n");

    for (int i = 0; i < n; i++)
    {
        printf("%d ", vetor[i]);
    }

    printf("\n");
}