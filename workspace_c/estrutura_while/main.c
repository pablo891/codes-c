#include <stdio.h>
#include <stdlib.h>

int main()
{
    int i, numero, maior;

    i = 1; //INICIALIZA��O DO CONTADOR
    printf("Informe o %d numero ", i);
    scanf("%d", &numero);
    maior = numero;

    while(i < 10){ //CONDI��O DE EXECU��O

        i = i + 1; //INCREMENTO DO CONTADOR

        printf("Informe o %d numero ", i);
        scanf("%d", &numero);

        if(numero > maior){
            maior = numero;
        }

    }

    printf("O maior numero digitado foi %d", maior);
    return 0;
}
