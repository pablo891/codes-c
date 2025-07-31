#include <stdio.h>
#include<stdlib.h>

void trocarSeNecessario(int *azul, int *vermelho, int *houveTroca) {
    if (*vermelho > *azul) {
        int temp = *azul;
        *azul = *vermelho;
        *vermelho = temp;
        *houveTroca = 1;
    } else {
        *houveTroca = 0;
    }
}

int cofreAbre(int azul, int vermelho) {
    int soma = azul + vermelho;

    if (soma % 3 == 0) {
        return 1;
    } 
    else {
        return 0; 
    }
}


int main() {
    int azul, vermelho, houveTroca;

    printf("Valor de Azul: \n");
    scanf("%d", &azul);

    printf("Valor de Vermelho: \n");
    scanf("%d", &vermelho);

    trocarSeNecessario(&azul, &vermelho, &houveTroca);

    if (houveTroca) {
        printf("Cristais trocados!\n");
    } else {
        printf("Cristais não foram trocados.\n");
    }

    printf("Cristal Azul: %d\n", azul);
    printf("Cristal Vermelho: %d\n", vermelho);

    int soma = azul + vermelho;
    printf("Soma: %d\n", soma);

    if (cofreAbre(azul, vermelho) == 1) {
        printf("O cofre foi aberto com sucesso!\n");
    } else {
        printf("O cofre continua trancado.\n");
    }

    return 0;
}
