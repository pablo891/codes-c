#include <stdio.h>
#include <stdlib.h>
#include <locale.h>

int main()
{
    setlocale(LC_ALL, "Portuguese");
    int numero;

    printf("Digite um n�mero inteiro: ");
    scanf("%d", &numero);

    if( numero % 4 == 0 && numero % 5 == 0 ){
        printf("O n�mero %d � divis�vel por 4 e 5. ", numero);
    }

    else{
        printf("O n�mero %d n�o � divis�vel por 4 e 5. ", numero);
    }
}
