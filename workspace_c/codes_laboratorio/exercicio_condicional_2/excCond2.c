#include <stdio.h>
#include <stdlib.h>
#include <locale.h>

int main()
{
    float produto, vmedia;
    setlocale(LC_ALL, "Portuguese");

    printf("Informe o valor do produto: ");
    scanf("%f", &produto);
    printf("Informe o valor da venda média mensal: ");
    scanf("%f", &vmedia);

    if (produto<20 && vmedia<500){
       produto= produto*1.1;
       printf("O valor do produto atualizado é de: R$%f", produto);
        }
    else if(produto>=20,00 && produto<=70,00 && vmedia>=500 && vmedia>1200){
       produto= produto*1.15 ;
       printf("O valor do produto atualizado é de: R$%f", produto);
        }
    else if(produto>= 80,00 && vmedia>=1200){
       produto= produto*0.83;
       printf("O valor do produto atualizado é de: R$%f", produto);
        }
}
