#include <stdio.h>
#include <string.h>
#define tamanho_modelo 50
#define distancia_percorrida 1000.0

int main() {
    char modelosCarros[5][tamanho_modelo];
    float consumosCarros[5];
    
    int maisEconomico = 0;

    for (int i = 0; i < 5; i++) {
        printf("Digite o modelo do carro %d: ", i + 1);
        scanf("%s", modelosCarros[i]);

        printf("Digite o consumo do %s (km/l): ", modelosCarros[i]);
        scanf("%f", &consumosCarros[i]);
    }

    for (int i = 1; i < 5; i++) {
        if (consumosCarros[i] > consumosCarros[maisEconomico]) {
            maisEconomico = i;
        }
    }

    printf("\nO modelo de carro mais economico e: %s\n", modelosCarros[maisEconomico]);

    printf("\nConsumo para percorrer %.1f km:\n", distancia_percorrida);
    for (int i = 0; i < 5; i++) {
        float litrosNecessarios = distancia_percorrida / consumosCarros[i];
        printf("%s: %.2f litros\n", modelosCarros[i], litrosNecessarios);
    }

    return 0;
}