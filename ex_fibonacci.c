#include <stdio.h>
#include "fibonacci.h"

int main()
{
    int n;

    printf("Quantos termos deseja? ");
    scanf("%d", &n);

    int fibonacci[n];

    calcularFibonacci(fibonacci, n);

    imprimirFibonacci(fibonacci, n);

    return 0;
}