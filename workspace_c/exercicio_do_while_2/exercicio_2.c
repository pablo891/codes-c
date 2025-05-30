#include <stdio.h>
#include <stdlib.h>
#include <locale.h>

int main()
{
    setlocale(LC_ALL, "Portuguese");
    int opcao;

    printf("Menu de Opções: \n1- Adicionar produto\n2- Remover produto\n3- Consultar estoque\n0- Sair\n");
    scanf("%d", &opcao);

    do{
        printf("Menu de Opções: \n1- Adicionar produto\n2- Remover produto\n3- Consultar estoque\n0- Sair\n");
        scanf("%d", &opcao);
    } while (opcao != 0);

    printf("Programa encerrado!");
    return 0;
}
