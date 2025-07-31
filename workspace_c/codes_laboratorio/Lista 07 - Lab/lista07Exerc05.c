#include <stdio.h>
#include <stdlib.h>

//Autor: Pablo Ricardo - 20251SI0011


int verificarMenor(int num1, int num2){
    int menor;
    if(num1 > num2){
        menor = num2;
    }

    else{
        menor = num1;
    }

    return menor;

}

int main(){
    int num1, num2;

    printf("Informe o primeiro número: ");
    scanf("%d", &num1);

    printf("Informe o segundo número: ");
    scanf("%d", &num2);

    printf("O menor número é: %d", verificarMenor(num1, num2));
}