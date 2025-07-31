#include <stdio.h>
#include <stdlib.h>

//Autor: Pablo Ricardo - 20251SI0011

float soma(float num1, float num2){
    float resultado;
        resultado = num1 + num2;
    
    return resultado;
}

int main(){
    float num1, num2;
        printf("Informe o primeiro valor: ");
        scanf("%f", &num1);

        printf("Informe o segundo valor: ");
        scanf("%f", &num2);

        printf("Soma dos valores %.1f e %.1f: %.1f", num1, num2, soma(num1, num2));
}