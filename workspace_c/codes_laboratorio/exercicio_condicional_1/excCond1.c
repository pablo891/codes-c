#include <stdio.h>
#include <stdlib.h>
#include <locale.h>

int main()
{
    float salario;
    setlocale(LC_ALL, "Portuguese");

    printf("Informe seu salário: ");
    scanf("%f", &salario);

    if(salario >= 415 && salario < 900){
        salario = salario * 1.25;
        printf("Seu salário atual é: R$%.2f", salario);
    }

    else if(salario >= 900 && salario < 1500){
        salario = salario * 1.2;
        printf("Seu salário atual é: R$%.2f", salario);
    }

    else if(salario >= 1500){
        salario = salario * 1.175;
        printf("Seu salário atual é: R$%.2f", salario);
    }

    //Calculando Imposto
    if(salario < 600){
        salario = salario * 1;
        printf("\nSalário líquido com imposto de 0%% é: R$%.2f\n", salario);
    }

    else if(salario >= 600 && salario < 1500){
        salario = salario * 0.95;
        printf("\nSalário líquido com imposto de 5%% é: R$%.2f\n", salario);
    }

    else if(salario >= 1500 && salario < 2700){
        salario = salario * 0.88;
        printf("\nSalário líquido com imposto de 12%% é: R$%.2f\n", salario);
    }

    else if(salario >= 2700 ){
        salario = salario * 0.825;
        printf("\nSalário líquido com imposto de 17.5%% é: R$%.2f\n", salario);
    }
}
