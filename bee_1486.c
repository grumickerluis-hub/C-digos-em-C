#include <stdio.h>

int main() {
    int P, N, C;

    while (1) {
        scanf("%d %d %d", &P, &N, &C);

        // condição de parada correta
        if (P == 0 && N == 0 && C == 0)
            break;

        int M[N][P];

        // leitura da matriz 
        for (int i = 0; i < N; i++) {
            for (int j = 0; j < P; j++) {
                scanf("%d", &M[i][j]);
            }
        }

        int resposta = 0;

        // percorrer colunas (palitos são verticais)
        for (int j = 0; j < P; j++) {
            int tamanho = 0;

            for (int i = 0; i < N; i++) {
                if (M[i][j] == 1) {
                    tamanho++;
                } else {
                    if (tamanho >= C) {
                        resposta++;
                    }
                    tamanho = 0;
                }
            }

            // caso o palito termine na última linha
            if (tamanho >= C) {
                resposta++;
            }
        }

        printf("%d\n", resposta);
    }

    return 0;
}