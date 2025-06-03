#include <stdio.h>
#include <stdlib.h>
#include <math.h>

int main()
{
    int x, termos, i, fatorial, j ;
    float termo, soma = 1;

    printf("Informe o valor X: ");
    scanf("%d", &x);

    printf("Informe a quantidade de termos: ");
    scanf("%d", &termos);

    for (j = 2; j <= termos; j++){
        fatorial = 1;
        for(i = j+1; i >= 1; i--){
            fatorial = fatorial * i;

        }

        termo = pow(x, j) / fatorial;

        if(j%2==0){
            soma = soma + termo;
        }
        else{
            soma = soma - termo;
        }

    }




    printf("Soma dos Termos: %f", soma);


    return 0;
}
