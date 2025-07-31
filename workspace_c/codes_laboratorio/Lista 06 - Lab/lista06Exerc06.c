#include <stdio.h>
#include <stdlib.h>
#include <locale.h>

//Aluno: Pablo Ricardo (20251SI0011)

int main() {
    setlocale(LC_ALL, "Portuguese");

    int codCidade, numVeiculos, numAcidentes, i;
    int somaVeiculos = 0, somaAcidentes = 0;
    float indice, maiorIndice, menorIndice;
    int cidadeMaior, cidadeMenor;

    for(i = 1; i <= 2; i++) {  // Altere o 2 para 5 quando quiser usar 5 cidades
        printf("--------- Digite o código da cidade %d: ", i);
        scanf("%d", &codCidade);

        printf("Digite o número de veículos de passeio: ");
        scanf("%d", &numVeiculos);

        printf("Digite o número de acidentes de trânsito: ");
        scanf("%d", &numAcidentes);

        indice = (float) numAcidentes / numVeiculos;

        if (i == 1) {
            maiorIndice = indice;
            menorIndice = indice;
            cidadeMaior = codCidade;
            cidadeMenor = codCidade;
        } else {
            if (indice > maiorIndice) {
                maiorIndice = indice;
                cidadeMaior = codCidade;
            }
            if (indice < menorIndice) {
                menorIndice = indice;
                cidadeMenor = codCidade;
            }
        }

        somaVeiculos += numVeiculos;
        somaAcidentes += numAcidentes;
    }

    printf("\nMaior índice de acidentes: %.2f (Cidade %d)\n", maiorIndice, cidadeMaior);
    printf("Menor índice de acidentes: %.2f (Cidade %d)\n", menorIndice, cidadeMenor);
    printf("Média de veículos nas cidades: %.2f\n", (float)somaVeiculos / i);
    printf("Média de acidentes nas cidades: %.2f\n", (float)somaAcidentes / i);

    return 0;
}
