#include <stdio.h>

int main() {
    int vetor[10];
    int i, j, temp;

    printf("Digite %d numeros inteiros para preencher o vetor:\n", 10);
    for (i = 0; i < 10; i++) {
        printf("Posicao %d: ", i + 1);
        scanf("%d", &vetor[i]);
    }

    // Ordenacao decrescente (algoritmo Bubble Sort)
    for (i = 0; i < 10 - 1; i++) {
        for (j = 0; j < 10 - 1 - i; j++) {
            if (vetor[j] < vetor[j + 1]) {
                temp = vetor[j];
                vetor[j] = vetor[j + 1];
                vetor[j + 1] = temp;
            }
        }
    }

    printf("\nVetor resultante (ordenacao decrescente):\n");
    for (i = 0; i < 10; i++) {
        printf("%d ", vetor[i]);
    }
    printf("\n");

    return 0;
}