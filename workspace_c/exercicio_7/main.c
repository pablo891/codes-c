#include <stdio.h>
#include <stdlib.h>
#include <locale.h>

    int main()
    {
        setlocale(LC_ALL,"Portuguese");
        int cargo;
        float salario;

        printf("Digite seu sal�rio: R$");
        scanf("%f", &salario);

        printf("\n1- Escritur�rio\n2- Secret�rio\n3- Caixa\n4- Gerente\n5- Diretor\nDigite o n�mero do seu cargo: ");
        scanf("%d", &cargo);

        switch (cargo){
            case 1:
                salario = salario * 1.5;
                printf("\nSeu sal�rio de Escritur�rio com aumento ser� R$%f", salario);
            break;

            case 2:
                salario = salario * 1.35;
                printf("\nSeu sal�rio de Secret�rio com aumento ser� R$%f", salario);
            break;

            case 3:
                salario = salario * 1.2;
                printf("\nSeu sal�rio de Caixa com aumento ser� R$%f", salario);
            break;

            case 4:
                salario = salario * 1.1;
                printf("\nSeu sal�rio de Gerente com aumento ser� R$%f", salario);
            break;

            case 5:
                salario = salario * 1;
                printf("\nSeu sal�rio de Diretor ser� R$%f", salario);
            break;
        }
    }
