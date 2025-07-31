#include <stdio.h>

void trocarSaida(int simbolo){
    for(int i = 1; i <= 15; i++){
        printf("%c", simbolo);
    }
}

int dobrarValor(int n){
    return  n * 2;
}


int main(){
    int num[3];
    char simbolo = '*';
    for(int i = 0; i < 3; i++){
        trocarSaida(simbolo);
        printf("\nDigite o número %d: ", i + 1);
        scanf("%d", &num[i]);
        printf("\nDobro: %d\n",dobrarValor(num[i]));
    }
}