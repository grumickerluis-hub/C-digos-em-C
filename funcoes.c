#include <stdio.h>

int quadrado(int x) {

    return x * x;
}

int main() {
    int a;
    scanf("%d", &a);

    printf("O Quadrado de %d é : %d\n", a, quadrado(a));
return 0;
}