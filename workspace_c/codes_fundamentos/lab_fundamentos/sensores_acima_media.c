#include <stdio.h>

float media(float *v, int n) {
    float soma = 0;
    for (int i = 0; i < n; i++) {
        soma += *(v + i);
    }
    return soma / n;
}

void exibirAcima(char nomes[][21], float *v, int n, float media) {
    printf("\n--- Sensores com Temperatura Acima da Média (%.2f°C) ---\n", media);
    for (int i = 0; i < n; i++) {
        if (*(v + i) > media) {
            printf("Sensor: %s, Temperatura: %.2f°C\n", nomes[i], *(v + i));
        }
    }
}

int main() {
    char nomes[10][21];
    float temperaturas[10];
    int numSensores = 10;

    for (int i = 0; i < numSensores; i++) {
        printf("Digite o nome do sensor %d: ", i + 1);
        scanf("%s", nomes[i]);
        
        printf("Digite a temperatura registrada por %s: ", nomes[i]);
        scanf("%f", &temperaturas[i]);
    }

    float mediaGeral = media(temperaturas, numSensores);
    printf("\nTemperatura média de todos os sensores: %.2f°C\n", mediaGeral);

    exibirAcima(nomes, temperaturas, numSensores, mediaGeral);

    return 0;
}