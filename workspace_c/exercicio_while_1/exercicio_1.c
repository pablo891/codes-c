#include <stdio.h>
#include <stdlib.h>
#include <locale.h>

int main()
{
    setlocale(LC_ALL, "Portuguese");
    float saldo, saque;

    saldo = 1000;
    printf("Informe o valor do saque: ");
    scanf("%f", &saque);

    while (saque > 1000 || !((int)saque % 10 == 0)){
      printf("Saque inválido. \nDigite novamente um valor válido: ");
      scanf("%f", &saque);
    };

    printf("\nSaque confirmado! O valor do saque é: R$ %2.f", saque);
    return 0;
}
