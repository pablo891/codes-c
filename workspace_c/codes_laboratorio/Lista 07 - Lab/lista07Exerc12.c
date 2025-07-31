#include <stdio.h>
#include <stdlib.h>
#include <math.h>

//Autor: Pablo Ricardo - 20251SI0011

int pot(int x, int n){
    int pot;
    pot = pow(x, n);
    
    return pot;
}


int main(){
    int x, n;

    printf("Informe a base: ");
    scanf("%d", &x);

    printf("Informe o expoente:");
    scanf("%d", &n);

    printf("Potênciação entre %d e %d: %d", x, n, pot(x, n));
}