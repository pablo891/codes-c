#include <stdio.h>
#include<stdlib.h>

//Aluno: Pablo Ricardo (20251SI0011)

int main() {
    int n;
    int numero;
    int fatorial;


    printf("Digite a quantidade de numeros (N) que deseja calcular o fatorial: ");
    scanf("%d", &n);

    if (n <= 0) {
        printf("A quantidade de numeros deve ser positiva.\n");
        return 1;
    }

    for (int i = 1; i <= n; i++) {
        printf("Digite o %do numero inteiro e positivo: ", i);
        scanf("%d", &numero);

        if (numero < 0) {
            printf("Numero invalido! Por favor, digite um numero positivo.\n");
            i--;
        } else {
            if (numero == 0) {
                fatorial = 1;
            } else {
                fatorial = 1;
                for (int j = 1; j <= numero; j++) {
                    fatorial *= j;
                }
            }
            printf("Numero: %d, Fatorial: %d\n", numero, fatorial);
        }
    }

    return 0;
}
