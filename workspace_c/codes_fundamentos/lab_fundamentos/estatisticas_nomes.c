#include <stdio.h>

int comecaComA(char nomes[][21], int n) {
    int cont = 0;
    for (int i = 0; i < n; i++) {
        if (*(nomes + i) == 'A') {
            cont++;
        }
    }
    return cont;
}

int maioresQue6(char nomes[][21], int n) {
    int cont = 0;
    for (int i = 0; i < n; i++) {
        int tamanhoAtual = 0;
        char *p = nomes[i];

        while (*p != '\0') {
            tamanhoAtual++;
            p++;
        }

        if (tamanhoAtual > 6) {
            cont++;
        }
    }
    return cont;
}

void maisLongo(char nomes[][21], int n, char *destino) {
    int max = 0;
    char *ponteiroMaisLongo = nomes[0];

    for (int i = 0; i < n; i++) {
        int tamanhoAtual = 0;
        char *p = nomes[i];

        while (*p != '\0') {
            tamanhoAtual++;
            p++;
        }

        if (tamanhoAtual > max) {
            max = tamanhoAtual;
            ponteiroMaisLongo = nomes[i];
        }
    }

    while (*ponteiroMaisLongo != '\0') {
        *destino = *ponteiroMaisLongo;
        destino++;
        ponteiroMaisLongo++;
    }
    *destino = '\0';
}

int main() {
    char nomes[10][21];
    char nomeMaisLongo[21];
    int numNomes = 0;

    for (int i = 0; i < 10; i++) {
        printf("Digite o nome do sensor %d (ou FIM para encerrar): ", i + 1);
        scanf("%20s", nomes[i]);

        if (nomes[i][0] == 'F' && nomes[i][1] == 'I' && nomes[i][2] == 'M' && nomes[i][3] == '\0') {
            break;
        }
        numNomes++;
    }
    
    if (numNomes > 0) {
        printf("\n--- Resultados da Análise ---\n");
        printf("Nomes que começam com 'A': %d\n", comecaComA(nomes, numNomes));
        printf("Nomes com mais de 6 caracteres: %d\n", maioresQue6(nomes, numNomes));
    
        maisLongo(nomes, numNomes, nomeMaisLongo);
        printf("Nome mais longo encontrado: %s\n", nomeMaisLongo);
    } 
    else {
        printf("\nPrograma encerrado\n");
    }

    return 0;
}