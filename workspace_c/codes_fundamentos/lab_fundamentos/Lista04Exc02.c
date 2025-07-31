#include <stdio.h>
#include <stdlib.h>
#include<time.h>

int gerarNumero() {
    return rand() % 100 + 1;
}

int calcularDistancia(int chute, int alvo) {
    int diferenca;
    
    if (chute > alvo) {
        diferenca = chute - alvo;
    } else {
        diferenca = alvo - chute;
    }

    return diferenca;
}

void fornecerDica(int chute, int alvo) {
    int diferenca = calcularDistancia(chute, alvo);

    if (chute > alvo)
        printf("Está à direita e ");
    else
        printf("Está à esquerda e ");

    if (diferenca > 15)
        printf("frio\n");
    else if (diferenca >= 8)
        printf("morno\n");
    else
        printf("quente\n");
}

int main() {
    int alvo, chute, i;
    
    srand(time(NULL));
    alvo = gerarNumero();

    for (i = 1; i <= 5; i++) {
        printf("%dª tentativa: ", i);
        scanf("%d", &chute);

        if (chute == alvo) {
            printf("Você acertou!\n");
            return 0;
        } else {
            fornecerDica(chute, alvo);
        }
    }

    printf("Você errou todas as tentativas. O número era: %d\n", alvo);
    return 0;
}
