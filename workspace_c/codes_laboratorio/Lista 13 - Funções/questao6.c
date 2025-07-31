#include <stdio.h>

void numeroInvalido(){
    printf("Número Inválido.");
}

int main(){
    int num;
    char meses[3][10] = {"Janeiro","Fevereiro","Marco"};


    printf("Digite o número do mês (1 TRIMESTRE): ");
    scanf("%d", &num);

    if(num < 1 || num > 3){
            numeroInvalido();
    }

    else{
        if(num == 1){
            printf("Mês: %s", meses[0]);
        }

        else if(num == 2){
            printf("Mês: %s", meses[1]);
        }

        else{
            printf("Mês: %s", meses[2]);
        }
    }
}