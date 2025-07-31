#include <stdio.h>

float media(int n){
    return (float) n / 3;
}

int main(){
    int nota[3];
    int somaNota = 0;

    for(int i = 0; i < 3; i++){
        printf("Digite a nota %d: ", i + 1);
        scanf("%d", &nota[i]);
        somaNota += nota[i];
    }

    printf("A média aritmética é: %.2f", media(somaNota));

}