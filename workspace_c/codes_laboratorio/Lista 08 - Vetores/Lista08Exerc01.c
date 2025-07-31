#include <stdio.h>
#include <stdlib.h>

int verificarNumeroPrimo (int numeros){
    if(numeros == 2){
        return 1;
    }

    else if(numeros == 1 || numeros % 2 == 0){
        return 0;
    }

    for(int i = numeros - 1; i > 2; i--){
        if(numeros % i == 0){
            return 0;
        }
    }

    return 1;
}


int main(){
    int numeros[9];

    for(int i = 0; i < 9; i++){
        printf("Informe o número %d: ", i + 1);
        scanf("%d", &numeros[i]);
    }

    for(int i = 0; i < 9; i++){
        if(verificarNumeroPrimo(numeros[i]) == 1){
            printf("\nNumero: %d; Posiçao %d\n", numeros[i], i + 1);
        }
    }
}