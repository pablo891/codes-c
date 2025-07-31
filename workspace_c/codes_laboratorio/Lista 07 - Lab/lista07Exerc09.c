#include <stdio.h>
#include <stdlib.h>

//Autor: Pablo Ricardo - 20251SI0011   

int produto(int num){
    int mult = 1, i;

    for(i = 1; i <= num; i++){
        mult *= i;
    }
    return mult;
}

int main(){
    int num;

    printf("Informe o número: ");
    scanf("%d", &num);

    printf("Produto(%d): %d", num, produto(num));
}