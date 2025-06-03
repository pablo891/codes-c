#include <stdio.h>
#include <stdlib.h>
#include <locale.h>

int main()
{
    setlocale(LC_ALL, "Portuguese");
    int numero;

    printf("Digite um número inteiro: ");
    scanf("%d", &numero);

    if( numero % 4 == 0 && numero % 5 == 0 ){
        printf("O número %d é divisível por 4 e 5. ", numero);
    }

    else{
        printf("O número %d não é divisível por 4 e 5. ", numero);
    }
}
