#include <stdio.h>
#include <stdlib.h>


int main(){
    int vet[10], par[10], impar[10];
    int i, ip = 0, ii= 0, somap = 0, somai = 0;

    for(i = 0; i < 10; i++){
        printf("Informe o VET[%d]: ", i);
        scanf("%d", &vet[i]);
    }

    for(i = 0; i < 10; i++){
        if(vet[i] % 2 == 0){
            par[ip] = vet[i];
            ip++;
        }

        else{
            impar[ii] = vet[i];
            ii++;
        }
    }

    printf("\nMOSTRANDO OS PARES\n");

    for(i = 0; i < ip; i++){
        printf("PAR[%d] = %d\n", i, par[i]);
        somap += par[i];
    }
    printf("A soma dos pares é %d\n");

    printf("\nMOSTRANDO OS IMPARES\n");
        for(i = 0; i < ii; i++){
            printf("IMPAR[%d] = %d\n", i, impar[i]);
            somai += impar[i];
        }

        print("A media dos impares é %.2f\n", (float)somai/ii);

    return 0;
}