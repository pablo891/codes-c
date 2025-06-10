#include<stdio.h>
#include<stdlib.h>
#include<locale.h>

int main(){
    setlocale(LC_ALL, "Portuguese");
    int h, i, j;

    printf("Digite um número inteiro: ");
    scanf("%d", &h);

    if(h >= 1 && h <= 50){
        for(i = 1; i <= h; i++){
            for(j = 1; j <= i; j++){
                printf("*");
            }
        printf("\n");
            } 
    }

    else{
        printf("Altura inválida");
    }


    return 0;
}