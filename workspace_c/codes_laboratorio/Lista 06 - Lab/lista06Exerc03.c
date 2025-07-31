#include<stdio.h>
#include<stdlib.h>

//Aluno: Pablo Ricardo (20251SI0011)

int main() {
    float salario_inicial = 1000.00;
    float salario_atual = salario_inicial;
    float percentual_aumento = 0.015;

    printf("Salario inicial (2005): R$ %.2f\n", salario_inicial);

    for (int ano = 2006; ano <= 2025; ano++) {
        if (ano == 2006) {
            salario_atual += salario_inicial * percentual_aumento;
        } else {
            percentual_aumento *= 2;
            salario_atual += salario_atual * percentual_aumento;
        }
        printf("Salario em %d: R$ %.2f (Aumento de %.2f%%)\n", ano, salario_atual, percentual_aumento * 100);
    }
    printf("Salario atual (2025) com FOR: R$ %.2f\n\n", salario_atual);


    return 0;
}
