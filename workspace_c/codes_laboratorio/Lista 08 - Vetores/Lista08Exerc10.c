#include <stdio.h>
#include <string.h>

#define num_funcionarios 5
#define tamanho_nome 50

int main() {
    char nomesFuncionarios[num_funcionarios][tamanho_nome];
    float salarios[num_funcionarios];
    int tempoServico[num_funcionarios];
    float novosSalarios[num_funcionarios];
    int temAumento[num_funcionarios];

    printf("Preenchimento dos dados dos funcionarios:\n");
    for (int i = 0; i < num_funcionarios; i++) {
        printf("\nFuncionario %d:\n", i + 1);
        printf("Nome: ");
        scanf(" %[^\n]", nomesFuncionarios[i]);

        printf("Salario: R$ ");
        scanf("%f", &salarios[i]);

        printf("Tempo de servico (anos): ");
        scanf("%d", &tempoServico[i]);

        temAumento[i] = 0; 
        novosSalarios[i] = salarios[i]; 
    }

    printf("\n--- Relatorio de Funcionarios SEM Aumento ---\n");
    int encontrouSemAumento = 0;
    for (int i = 0; i < num_funcionarios; i++) {
        int condicaoTempoServico = (tempoServico[i] > 5);
        int condicaoSalario = (salarios[i] < 800.00);

        if (!condicaoTempoServico && !condicaoSalario) {
            printf("%s\n", nomesFuncionarios[i]);
            encontrouSemAumento = 1;
        }
    }
    if (!encontrouSemAumento) {
        printf("Nenhum funcionario sem aumento.\n");
    }


    printf("\n--- Relatorio de Funcionarios COM Aumento ---\n");
    int encontrouComAumento = 0;
    for (int i = 0; i < num_funcionarios; i++) {
        int condicaoTempoServico = (tempoServico[i] > 5);
        int condicaoSalario = (salarios[i] < 800.00);

        if (condicaoTempoServico || condicaoSalario) {
            temAumento[i] = 1;
            float percentualAumento = 0.0;

            if (condicaoTempoServico && condicaoSalario) {
                percentualAumento = 0.35; // 35%
            } else if (condicaoTempoServico) {
                percentualAumento = 0.25; // 25%
            } else { // Apenas condicaoSalario
                percentualAumento = 0.15; // 15%
            }
            novosSalarios[i] = salarios[i] * (1 + percentualAumento);
            printf("Nome: %s, Novo Salario: R$ %.2f\n", nomesFuncionarios[i], novosSalarios[i]);
            encontrouComAumento = 1;
        }
    }
    if (!encontrouComAumento) {
        printf("Nenhum funcionario com aumento.\n");
    }

    return 0;
}