#include <stdio.h>
#include <stdlib.h>

int main () {
    int vetor1[10], vetor2[10], vetorResultante[20];

    for (int i = 0; i < 10; i++) {
        printf("Qual numero voce deseja adicionar no vetor 1?\n");
        scanf("%d", &vetor1[i]);
    }

    printf("----------------------------------------\n");

    for (int i = 0; i < 10; i++) {
        printf("Qual numero voce deseja adicionar no vetor 2?\n");
        scanf("%d", &vetor2[i]);
    }

    for (int i = 0, j = 0; i < 10; i++) {
        vetorResultante[j++] = vetor1[i];
        vetorResultante[j++] = vetor2[i];
    }

    printf("----------------------------\n");
    printf("Vetor resultante:\n");
    printf("----------------------------\n");

    for (int j = 0; j < 20; j++) {
        printf("%d\n", vetorResultante[j]);
    }
    return 0;
}
