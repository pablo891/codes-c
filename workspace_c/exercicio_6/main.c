#include <stdio.h>
#include <stdlib.h>
#include <locale.h>
int main()
{
    setlocale(LC_ALL, "Portuguese");
    int opcao;
    float num1, num2, result;

    printf("Menu de Op��es:\n1- Soma dois n�meros\n2-Ra�z Quadrada de um n�mero\nOp��o desejada: ");
    scanf("%d", &opcao);

    switch(opcao){
        case 1:
            printf("Digite o primeiro n�mero: ");
            scanf("%f", &num1);

            printf("Digite o segundo n�mero: ");
            scanf("%f", &num2);

            result = num1 + num2;

            printf("Soma: %f", result);
        break;

        case 2:
            printf("Digite o n�mero: ");
            scanf("%f", &num1);

            result = num1 * num1;

            printf("Soma: %f", result);
        break;
    }
}
