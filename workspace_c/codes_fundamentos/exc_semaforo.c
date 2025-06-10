#include<stdio.h>
#include<stdlib.h>
#include<locale.h>

int main(){
    setlocale(LC_ALL, "Portuguese");
    int a, b, mmc, i;

    printf("Digite o valor do primeiro semáforo (segundos): ");
    scanf("%d", &a);

    printf("Digite o valor do segundo semáforo (segundos): ");
    scanf("%d", &b);

    for(i = 1; i <= a * b; i++ ){

        if(i % a == 0 && i % b == 0){
            mmc = i;
            break;
        }

    }

    printf("O mmc entre %d e %d é: %d\n", a, b, mmc);
    return 0;
}