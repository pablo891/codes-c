#include <stdio.h>
#include <stdlib.h>

//Autor: Pablo Ricardo - 20251SI0011 

int verificarNumero(int num){
    int resto;
    resto = num % 2;

    if(resto == 0){
        return 1;
    }

    else{
        return 0;
    }
} 

int main(){
    int num;

    printf("Digite um número: \n");
    scanf("%d", &num);

    printf("Valor do Número: %d", verificarNumero(num));
}