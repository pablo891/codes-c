#include <stdio.h>
#include <stdlib.h>

int main()
{
    int num, fatorial = 1,i;
    printf("digite um numero: ");
    scanf("%d", &num);


     for(i = num ; i >= 1; i--){

        fatorial = fatorial * i;

    }

    printf("o fatorial do numero eh: %d", fatorial);
}
