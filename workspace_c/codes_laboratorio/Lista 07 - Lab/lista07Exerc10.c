#include <stdio.h>
#include <stdlib.h>

int fatorial(int num){
    int fat = 1, i;

    for(i = num; i >= 1; i--){
        fat *= i;
    }
    return fat;
}

int main(){
    int num;

    printf("Digite um número: ");
    scanf("%d", &num);

    printf("Fatorial(%d): %d", num, fatorial(num));
}