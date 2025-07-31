#include <stdio.h>
#include <math.h>

int verificarAlertas(float *d1, float *d2, int n) {
    int cont = 0;

    for (int i = 0; i < n; i++) {
        float diferenca = fabs(*(d1 + i) - *(d2 + i));

        if (diferenca > 5.0) {
            printf("Alerta no horário %dh: Variação de %.2f°C\n", i, diferenca);
            cont++;
        }
    }

    return cont;
}

int main() {
    float dia1[24];
    float dia2[24];
    int numHoras = 24;

    printf("--- Insira as temperaturas do Dia 1 ---\n");
    for (int i = 0; i < numHoras; i++) {
        printf("Temperatura da hora %d: ", i);
        scanf("%f", &dia1[i]);
    }

    printf("\n--- Insira as temperaturas do Dia 2 ---\n");
    for (int i = 0; i < numHoras; i++) {
        printf("Temperatura da hora (%d): ", i);
        scanf("%f", &dia2[i]);
    }

    int totalAlertas = verificarAlertas(dia1, dia2, numHoras);

    printf("\nTotal de alertas gerados: %d\n", totalAlertas);

    return 0;
}