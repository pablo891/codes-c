#include <stdio.h>
#include <stdlib.h>
#include <locale.h>

int main(){
    setlocale(LC_ALL, "Portuguese");
    int codigo, quantidade, opcao;
    float subtotal, valorProduto, total;

    total = 0;

    opcao = 1;

    do{
        printf("CARDÁPIO---------\nCod. 100 - Cachorro-quente -R$15,10\nCod. 101 - Bauru Simples - R$25,30\nCod. 102 - Bauru com Ovo - R$30,50\nCod. 103 - Hamburguer - R$35,10\nCod. 104 - Cheeseburguer - R$40,30\nCod. 105 - Refrigerante - R$10,00\nQual item você deseja? ");
        scanf("%d", &codigo);

        switch(codigo){
            case 100:
                valorProduto = 15.10;
                printf("Você escolheu o Cachorro-quente, de R$%.2f", valorProduto);
                printf("\nDigite a quantidade do produto: ");
                scanf("%d", &quantidade);
                subtotal = valorProduto * quantidade;

                printf("SUBTOTAL: %.2f", subtotal);
                break;

            case 101:
                valorProduto = 25.30;
                printf("Você escolheu o Bauru Simples, de R$%.2f", valorProduto);
                printf("\nDigite a quantidade do produto: ");
                scanf("%d", &quantidade);
                subtotal = valorProduto * quantidade;
                
                printf("SUBTOTAL: %.2f", subtotal);
                break;
            
            case 102:
                valorProduto = 30.50;
                printf("Você escolheu o Bauru com ovo, de R$%.2f", valorProduto);
                printf("\nDigite a quantidade do produto: ");
                scanf("%d", &quantidade);
                subtotal = valorProduto * quantidade;
                
                printf("SUBTOTAL: R$%.2f", subtotal);
                break;
            
            case 103:
                valorProduto = 35.10;
                printf("Você escolheu o Hamburguer, de R$%.2f", valorProduto);
                printf("\nDigite a quantidade do produto: ");
                scanf("%d", &quantidade);
                subtotal = valorProduto * quantidade;
                
                printf("SUBTOTAL: R$%.2f", subtotal);
                break;

            case 104:
                valorProduto = 40.30;
                printf("Você escolheu o Cheeseburguer, de R$%.2f", valorProduto);
                printf("\nDigite a quantidade do produto: ");
                scanf("%d", &quantidade);
                subtotal = valorProduto * quantidade;
                
                printf("SUBTOTAL: R$%.2f", subtotal);
                break;

            case 105:
                valorProduto = 10;
                printf("Você escolheu o refrigerante, de R$%.2f", valorProduto);
                printf("\nDigite a quantidade do produto: ");
                scanf("%d", &quantidade);
                subtotal = valorProduto * quantidade;
                
                printf("SUBTOTAL: R$%.2f", subtotal);
                break;

        }
        total += subtotal;
        
        printf("\nDeseja adicionar mais algo ao carrinho? (Digite 1 para prosseguir): \n");
        scanf("%d", &opcao);

        printf("\nTOTAL: R$%.2f\n", total);

        
    } while(opcao == 1);

    return 0;
}
