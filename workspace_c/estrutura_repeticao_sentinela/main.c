#include <stdio.h>
#include <stdlib.h>

int main()
{
    int numero, soma = 0;

    printf("Informe um numero: ");
    scanf("%d", &numero);

    while(numero != 0){
        soma += numero;
        printf("Informe outro numero: ");
        scanf("%d", &numero);
    }

    printf("\nA soma eh %d", soma);
    return 0;
}
