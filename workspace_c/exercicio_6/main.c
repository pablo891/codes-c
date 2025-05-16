#include <stdio.h>
#include <stdlib.h>
#include <locale.h>
int main()
{
    setlocale(LC_ALL, "Portuguese");
    int opcao;
    float num1, num2, result;

    printf("Menu de Opções:\n1- Soma dois números\n2-Raíz Quadrada de um número\nOpção desejada: ");
    scanf("%d", &opcao);

    switch(opcao){
        case 1:
            printf("Digite o primeiro número: ");
            scanf("%f", &num1);

            printf("Digite o segundo número: ");
            scanf("%f", &num2);

            result = num1 + num2;

            printf("Soma: %f", result);
        break;

        case 2:
            printf("Digite o número: ");
            scanf("%f", &num1);

            result = num1 * num1;

            printf("Soma: %f", result);
        break;
    }
}
