#include <stdio.h>

float media(float *v, int n) {
    float soma = 0.0;
    for (int i = 0; i < n; i++) {
        soma += *(v + i);
    }
    return soma / n;
}

float maior(float *v, int n) {
    float m = *v;
    for (int i = 1; i < n; i++) {
        if (*(v + i) > m) {
            m = *(v + i);
        }
    }
    return m;
}

float menor(float *v, int n) {
    float m = *v;
    for (int i = 1; i < n; i++) {
        if (*(v + i) < m) {
            m = *(v + i);
        }
    }
    return m;
}

int acimaMedia(float *v, int n, float mediaSemanal) {
    int cont = 0;
    for (int i = 0; i < n; i++) {
        if (*(v + i) > mediaSemanal) {
            cont += 1;
        }
    }
    return cont;
}

int main() {
    float temperaturas[7];
    int n = 7;

    printf("Digite as 7 temperaturas da semana:\n");
    for (int i = 0; i < n; i++) {
        printf("Dia %d: ", i + 1);
        scanf("%f", &temperaturas[i]);
    }

    float mediaTemperaturas = media(temperaturas, n);
    float maiorTemperatura = maior(temperaturas, n);
    float menorTemperatura = menor(temperaturas, n);
    int diasAcimaMedia = acimaMedia(temperaturas, n, mediaTemperaturas);

    printf("Temperatura Média: %.2f graus\n", mediaTemperaturas);
    printf("Maior Temperatura: %.2f graus\n", maiorTemperatura);
    printf("Menor Temperatura: %.2f graus\n", menorTemperatura);
    printf("Dias com temperatura acima da média: %d\n", diasAcimaMedia);

    return 0;
}