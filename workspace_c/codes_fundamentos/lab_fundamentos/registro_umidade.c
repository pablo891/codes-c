#include <stdio.h>

float media(float *v, int n) {
    float soma = 0.0;
    for (int i = 0; i < n; i++) {
        soma += *(v + i);
    }
    return soma / n;
}

int indiceMaior(float *v, int n) {
    int ind = 0;
    float m = *v;
    for (int i = 1; i < n; i++) {
        if (*(v + i) > m) {
            m = *(v + i);
            ind = i;
        }
    }
    return ind;
}

int indiceMenor(float *v, int n) {
    int ind = 0;
    float m = *v;
    for (int i = 1; i < n; i++) {
        if (*(v + i) < m) {
            m = *(v + i);
            ind = i;
        }
    }
    return ind;
}

int acimaDe80(float *v, int n) {
    int cont = 0;
    for (int i = 0; i < n; i++) {
        if (*(v + i) > 80.0) {
            cont++;
        }
    }
    return cont;
}

int main() {
    float umidade[24];
    int numHoras = 24;

    printf("Digite os 24 registros de umidade do dia:\n");
    for (int i = 0; i < numHoras; i++) {
        printf("Umidade da hora %d: ", i);
        scanf("%f", umidade[i]);
    }

    float mediaUmidade = media(umidade, numHoras);
    int horaMaior = indiceMaior(umidade, numHoras);
    int horaMenor = indiceMenor(umidade, numHoras);
    int horasAcima80 = acimaDe80(umidade, numHoras);

    printf("Média de umidade diária: %.2f%%\n", mediaUmidade);
    printf("Maior umidade registrada às %dh (%.1f%%)\n", horaMaior, umidade[horaMaior]);
    printf("Menor umidade registrada às %dh (%.1f%%)\n", horaMenor, umidade[horaMenor]);
    printf("Quantidade de horas com umidade acima de 80%%: %d\n", horasAcima80);

    return 0;
}