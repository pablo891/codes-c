#include<stdio.h>
#include<stdlib.h>

//Aluno: Pablo Ricardo (20251SI0011)

//Formula: E = 1 + 1/1! + 1/2! + 1/3! + ... + 1/N!
int main(){

    int n, contador, denominador, i, denominador2;
    float termo, e, e2, termo2;

    printf("Digite um valor positivo: ");
    scanf("%d", &n);

    denominador = 1;
    e = 1;
    for (contador = 2; contador <= n; contador++) {
        denominador *= (contador - 1);
        termo = 1.0 / denominador;

        e += termo;
    }

    printf("Valor de E, utilizando estrutura FOR: %.2f", e);
    

    // SOLUÇÃO UTILIZANDO ESTRUTURA WHILE
    denominador2 = 1;
    e2 =1;

    while (i <= n) {
        i++;
        denominador2 *= (i - 1);
        termo2 = 1.0 / denominador2;

        e2 += termo2;
    }

    printf("\nO valor aproximado de E é: %.2f\n", e2);

    return 0;
}