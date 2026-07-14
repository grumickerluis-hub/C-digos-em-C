#include <stdio.h>
#include "calculos.h"

int main()
{
    double raio;
    double base;
    double altura;

    printf("Raio do circulo: ");
    scanf("%lf", &raio);

    printf("Base do retangulo: ");
    scanf("%lf", &base);

    printf("Altura do retangulo: ");
    scanf("%lf", &altura);

    printf("\nArea do circulo: %.2lf\n", calcularAreaCirculo(raio));
    printf("Area do retangulo: %.2lf\n", calcularAreaRetangulo(base, altura));

    return 0;
}