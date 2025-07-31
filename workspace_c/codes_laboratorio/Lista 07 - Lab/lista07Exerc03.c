#include <stdio.h>
#include <stdlib.h>

//Autor: Pablo Ricardo - 20251SI0011

float calculoMedia(float n1, float n2, float media){
    media = (n1 + n2) / 2;
    return media;
}

int main(){
    float n1, n2, media = 0;

    printf("Digite a primeira nota: ");
    scanf("%f", &n1);

    printf("Digite a segunda nota: ");
    scanf("%f", &n2);

    printf("Média: %.2f", calculoMedia(n1, n2, media));


}