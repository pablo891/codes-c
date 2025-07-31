#include <stdio.h>
#include <stdlib.h>

int somatoria(int num){
    int i, soma = 0;
    
    for(i = 1; i <= num; i++){
        soma += i;
    }
    return soma;
}

int main(){
    int num;

    printf("Informe o número da somatória: ");
    scanf("%d", &num);

    printf("Somatório(%d): %d", num, somatoria(num));
}