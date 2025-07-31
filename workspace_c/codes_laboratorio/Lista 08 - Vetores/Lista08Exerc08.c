#include <stdio.h>

int main() {
    float temperatura[12];
    char *nomeMes[12] = { "Janeiro", "Fevereiro", "Março", "Abril", "Maio", "Junho", "Julho", "Agosto", "Setembro", "Outubro", "Novembro", "Dezembro"};

    for (int i = 0; i < 12; i++) {
        printf("Digite a temperatura média de %s: ", nomeMes[i]);
        scanf("%f", &temperatura[i]);
    }

    float maiorTemp = temperatura[0];
    float menorTemp = temperatura[0];
    int mesMaior = 0;
    int mesMenor = 0;

    for (int i = 1; i < 12; i++) {
        if (temperatura[i] > maiorTemp) {
            maiorTemp = temperatura[i];
            mesMaior = i;
        }
        if (temperatura[i] < menorTemp) {
            menorTemp = temperatura[i];
            mesMenor = i;
        }
    }

    printf("\nRESULTADOS ---\n");
    printf("Maior temperatura: %.2f°C em %s\n", maiorTemp, nomeMes[mesMaior]);
    printf("Menor temperatura: %.2f°C em %s\n", menorTemp, nomeMes[mesMenor]);

    return 0;
}
