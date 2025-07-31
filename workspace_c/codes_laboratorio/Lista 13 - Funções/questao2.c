#include <stdio.h>

int dobrarValor(int n){
    return  n * 2;
}

int main(){
    int num[3];

    for(int i = 0; i < 3; i++){
        printf("Digite o número %d: ", i + 1);
        scanf("%d", &num[i]);
    }

    for(int j = 0; j < 3; j++){
        printf("\nDobro de %d: %d", num[j], dobrarValor(num[j]));
    }
}