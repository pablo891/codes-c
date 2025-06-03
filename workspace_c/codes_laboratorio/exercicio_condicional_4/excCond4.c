#include <stdio.h>
#include <stdlib.h>
#include <locale.h>

int main() {
    setlocale(LC_ALL, "Portuguese");
    float numero, saldo;
    char operacao;

    printf("Digite o valor do seu saldo: ");
    scanf("%f", &saldo);

    printf("Digite o valor da opera��o: ");
    scanf("%f", &numero);

    printf ("Digite a operacao a ser feita:\nD- Dep�sito de R$%f\nR- Retirada de R$%f\n", numero);
    operacao = getche();

    if(operacao == 'd'){
        saldo += numero;
        printf("\nDep�sito realizado com sucesso\nSaldo atual: %.2f", saldo);
    }

    else if(operacao == 'r'){
        saldo = saldo - numero;
        printf("\nSaque realizado com sucesso\nSaldo atual: %.2f", saldo);
    }

    else{
        printf("Opera��o Inv�lida.");
    }

    //Caso de saldo menor que zero
    if (saldo < 0){
        printf("\nConta estourada.");
    }
}
