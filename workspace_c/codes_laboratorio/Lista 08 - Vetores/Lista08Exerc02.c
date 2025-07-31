#include <stdio.h>
#include <stdlib.h>

int main(){
    int quantidadeVendida[10], maisVendido = 0, posicaoMaisVendido;
    float comissao, valorGeral = 0, objeto[10], valorObjeto[10];

    for(int i = 0; i < 10; i++){
        printf("Digite o valor do produto[%d]: \n", i + 1);
        scanf("%f", &objeto[i]);

        printf("Digite a quantidade vendida do produto: \n");
        scanf("%d", &quantidadeVendida[i]);

        if(quantidadeVendida[i] >= maisVendido){
            maisVendido = quantidadeVendida[i];
            posicaoMaisVendido = i;  
        }

        valorObjeto[i] = objeto[i] * quantidadeVendida[i];

        valorGeral += valorObjeto[i];
    }

    comissao = valorGeral * 0.05;

    for(int i = 0; i < 10; i++){
        printf("\nRelatório de Vendas ----------------\n");

        printf("Produto [%d]: R$%.2f\n", i + 1, objeto[i]);
        printf("Quantidade Vendida: %d\n", quantidadeVendida[i]);
        printf("Valor total do produto [%d]: R$%.2f\n", i + 1, valorObjeto[i]);
    }

    printf("\nValor Geral das Vendas: R$%.2f-------------\n", valorGeral);
    printf("Comissão do Vendedor: R$%.2f", comissao);

    printf("\nProduto mais vendido -------------\n");
    printf("Posição [%d] |", posicaoMaisVendido);
    printf("Quantidade: %d", maisVendido);
}