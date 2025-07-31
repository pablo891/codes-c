#include <stdio.h>
#include <stdlib.h>

int main () {
    int vetor1[10], vetor2[10], vetorResultante[20];
    int tamanho = 0;
    int i, j, repetido;

    for (i = 0; i < 10; i++) {
        printf("Qual numero voce deseja adicionar no vetor 1?\n");
        scanf("%d", &vetor1[i]);
    }

    printf("----------------------------------------\n");

    for (i = 0; i < 10; i++) {
        printf("Qual numero voce deseja adicionar no vetor 2?\n");
        scanf("%d", &vetor2[i]);
    }

    for (i = 0; i < 10; i++) {
        repetido = 0;
        for (j = 0; j < tamanho; j++) {
            if (vetor1[i] == vetorResultante[j]) {
                repetido = 1;
                break;
            }
        }
        if (repetido == 0) {
            vetorResultante[tamanho] = vetor1[i];
            tamanho++;
        }
    }

    for (i = 0; i < 10; i++) {
        repetido = 0;
        for (j = 0; j < tamanho; j++) {
            if (vetor2[i] == vetorResultante[j]) {
                repetido = 1;
                break;
            }
        }
        if (repetido == 0) {
            vetorResultante[tamanho] = vetor2[i];
            tamanho++;
        }
    }

    printf("----------------------------\n");
    printf("Vetor resultante (Uniao sem repeticoes):\n");
    printf("----------------------------\n");

    printf("[");
    for (i = 0; i < tamanho; i++) {
        printf("%d", vetorResultante[i]);
        if (i < tamanho - 1) {
            printf(", ");
        }
    }
    printf("]\n");

    return 0;
}
