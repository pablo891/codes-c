#include <stdio.h>
#include <stdlib.h>

//Autor: Pablo Ricardo - 20251SI0011

int verificarMaior(int num1, int num2){
    int maior;
    if(num1 > num2){
        maior = num1;
    }

    else{
        maior = num2;
    }

    return maior;

}

int main(){
    int num1, num2;

    printf("Informe o primeiro número: ");
    scanf("%d", &num1);

    printf("Informe o segundo número: ");
    scanf("%d", &num2);

    printf("O maior número é: %d", verificarMaior(num1, num2));
}