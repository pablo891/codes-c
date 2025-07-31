#include <stdio.h>
#include <stdlib.h>

//Autor: Pablo Ricardo - 20251SI0011

int verificarMaior(int a, int b, int c){   
    int maior;

    if(a > b && b > c){
        maior = a;
    }

    else if(a > c && c > b){
        maior = a;
    }

    else if(b > a && a > c){
        maior = b;
    }

    else if(b > c && c > a){
        maior = b;
    }

    else if(c > a && a > b){
        maior = c;
    }

    else if(c > b && b > a){
        maior = c;
    }
    
    return maior;
}

int main(){
    int a, b, c;

    printf("Informe o primeiro número: ");
    scanf("%d", &a);

    printf("Informe o segundo número: ");
    scanf("%d", &b);

    printf("Informe o terceiro número: ");
    scanf("%d", &c);

    printf("O maior número é: %d", verificarMaior(a, b, c));
}