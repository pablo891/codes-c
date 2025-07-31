#include <stdio.h>
#include <stdlib.h>

//Autor: Pablo Ricardo - 20251SI0011

int verificarResto(int num){
    int resto;
    resto = num % 2;

    return resto;
}

int main(){
    int num;

    printf("Digite um número: \n");
    scanf("%d", &num);

    verificarResto(num);

    if(verificarResto(num) == 0){
        printf("O número %d é par", num);
    }

    else{
        printf("O número %d é ímpar", num);
    }
}