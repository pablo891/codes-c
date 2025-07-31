#include <stdio.h>
#include <string.h>

int numeroDoVoo[12];
char cidadeOrigem[12][30];
char cidadeDestino[12][30];
int lugaresLivres[12];

void cadastrarVoos() {
    printf("Cadastro dos Voos -----\n");

    for (int i = 0; i < 12; i++) {
        printf("\nVoo %d:\n", i + 1);

        printf("Número do voo: ");
        scanf("%d", &numeroDoVoo[i]);

        printf("Origem: ");
        scanf(" %[^\n]", cidadeOrigem[i]);

        printf("Destino: ");
        scanf(" %[^\n]", cidadeDestino[i]);

        printf("Lugares disponíveis: ");
        scanf("%d", &lugaresLivres[i]);
    }
}

int exibirMenuPrincipal() {
    int opcao;
    printf("\nMENU PRINCIPAL -------\n");
    printf("1 - Consultar voos\n");
    printf("2 - Fazer reserva\n");
    printf("3 - Sair\n");
    printf("Sua escolha: ");
    scanf("%d", &opcao);
    return opcao;
}

int exibirMenuConsulta() {
    int escolha;
    printf("\n-- CONSULTA --\n");
    printf("1 - Pelo número do voo\n");
    printf("2 - Pela origem\n");
    printf("3 - Pelo destino\n");
    printf("Escolha: ");
    scanf("%d", &escolha);
    return escolha;
}

void consultarPorNumero() {
    int numeroInformado, encontrado = 0;
    printf("Digite o número do voo: ");
    scanf("%d", &numeroInformado);

    for (int i = 0; i < 12; i++) {
        if (numeroDoVoo[i] == numeroInformado) {
            printf("Voo %d - De %s para %s - %d lugares\n",
                   numeroDoVoo[i], cidadeOrigem[i], cidadeDestino[i], lugaresLivres[i]);
            encontrado = 1;
            break;
        }
    }

    if (!encontrado) {
        printf("Voo não encontrado :(\n");
    }
}

void consultarPorOrigem() {
    char origemBuscada[30];
    int achou = 0;

    printf("Digite a origem: ");
    scanf(" %[^\n]", origemBuscada);

    for (int i = 0; i < 12; i++) {
        if (strcmp(cidadeOrigem[i], origemBuscada) == 0) {
            printf("Voo %d - Para %s - %d lugares\n",
                   numeroDoVoo[i], cidadeDestino[i], lugaresLivres[i]);
            achou = 1;
        }
    }

    if (!achou) {
        printf("Nenhum voo saindo de %s foi encontrado.\n", origemBuscada);
    }
}

void consultarPorDestino() {
    char destinoBuscado[30];
    int achou = 0;

    printf("Digite o destino: ");
    scanf(" %[^\n]", destinoBuscado);

    for (int i = 0; i < 12; i++) {
        if (strcmp(cidadeDestino[i], destinoBuscado) == 0) {
            printf("Voo %d - De %s - %d lugares\n",
                   numeroDoVoo[i], cidadeOrigem[i], lugaresLivres[i]);
            achou = 1;
        }
    }

    if (!achou) {
        printf("Nenhum voo indo para %s foi encontrado.\n", destinoBuscado);
    }
}

void fazerReserva() {
    int vooEscolhido, achou = 0;

    printf("Digite o número do voo que deseja reservar: ");
    scanf("%d", &vooEscolhido);

    for (int i = 0; i < 12; i++) {
        if (numeroDoVoo[i] == vooEscolhido) {
            achou = 1;
            if (lugaresLivres[i] > 0) {
                lugaresLivres[i]--;
                printf("Reserva confirmada no voo %d! Boa viagem!\n", vooEscolhido);
            } else {
                printf("Voo lotado. Nenhum assento disponível.\n");
            }
            break;
        }
    }

    if (!achou) {
        printf("Número do voo não encontrado.\n");
    }
}

int main() {
    cadastrarVoos();

    int opcaoUsuario;

    do {
        opcaoUsuario = exibirMenuPrincipal();

        switch (opcaoUsuario) {
            case 1: {
                int tipoConsulta = exibirMenuConsulta();

                if (tipoConsulta == 1) {
                    consultarPorNumero();
                } else if (tipoConsulta == 2) {
                    consultarPorOrigem();
                } else if (tipoConsulta == 3) {
                    consultarPorDestino();
                } else {
                    printf("Opção de consulta inválida.\n");
                }
                break;
            }

            case 2:
                fazerReserva();
                break;

            case 3:
                printf("Encerrando o programa. Volte sempre!\n");
                break;

            default:
                printf("Opção inválida. Por favor, escolha novamente.\n");
                break;
        }

    } while (opcaoUsuario != 3);

    return 0;
}