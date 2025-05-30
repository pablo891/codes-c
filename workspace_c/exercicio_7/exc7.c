#include <stdio.h>
#include <stdlib.h>
#include <locale.h>

    int main()
    {
        setlocale(LC_ALL,"Portuguese");
        int cargo;
        float salario;

        printf("Digite seu salário: R$");
        scanf("%f", &salario);

        printf("\n1- Escriturário\n2- Secretário\n3- Caixa\n4- Gerente\n5- Diretor\nDigite o número do seu cargo: ");
        scanf("%d", &cargo);

        switch (cargo){
            case 1:
                salario = salario * 1.5;
                printf("\nSeu salário de Escriturário com aumento será R$%f", salario);
            break;

            case 2:
                salario = salario * 1.35;
                printf("\nSeu salário de Secretário com aumento será R$%f", salario);
            break;

            case 3:
                salario = salario * 1.2;
                printf("\nSeu salário de Caixa com aumento será R$%f", salario);
            break;

            case 4:
                salario = salario * 1.1;
                printf("\nSeu salário de Gerente com aumento será R$%f", salario);
            break;

            case 5:
                salario = salario * 1;
                printf("\nSeu salário de Diretor será R$%f", salario);
            break;
        }
    }
