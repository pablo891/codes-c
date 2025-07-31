#include <stdio.h>

void trocarSaida(char simbolo){
    for(int i = 1; i <= 20; i++){
        printf("%c", simbolo);
    }
}

int main(){
    char simbolo[3] = {'*', '=', '#'};
    
    trocarSaida(simbolo[0]);
    printf("\nSISTEMAS DE INFORMAÇÃO\n");
    trocarSaida(simbolo[0]);
    printf("\nLABORATÓRIO DE PROGRAMAÇÃO\n");
    trocarSaida(simbolo[0]);

    printf("\n");

    trocarSaida(simbolo[0]);
    printf("\nSISTEMAS DE INFORMAÇÃO\n");
    trocarSaida(simbolo[1]);
    printf("\nLABORATÓRIO DE PROGRAMAÇÃO\n");
    trocarSaida(simbolo[2]);
}