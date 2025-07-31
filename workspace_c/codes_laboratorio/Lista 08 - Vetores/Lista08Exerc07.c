#include <stdio.h>

int main() {
    char gabarito[8];
    int numerosAlunos[10];
    char respostasAlunos[10][8];
    int notasAlunos[10];
    int alunosAprovados = 0;

    printf("Digite o gabarito da prova (%d letras, sem espacos): ", 8);
    scanf("%s", gabarito);

    for (int i = 0; i < 10; i++) {
        printf("\nDigite o numero do aluno %d: ", i + 1);
        scanf("%d", &numerosAlunos[i]);

        printf("Digite as respostas do aluno %d (%d letras, sem espacos): ", numerosAlunos[i], 8);
        scanf("%s", respostasAlunos[i]);
    }

    for (int i = 0; i < 10; i++) {
        int notaAtual = 0;
        for (int j = 0; j < 8; j++) {
            if (respostasAlunos[i][j] == gabarito[j]) {
                notaAtual++;
            }
        }
        notasAlunos[i] = notaAtual;
        printf("Aluno: %d, Nota: %d\n", numerosAlunos[i], notasAlunos[i]);

        if (notasAlunos[i] >= 6) {
            alunosAprovados++;
        }
    }

    float porcentagemAprovacao = (float)alunosAprovados / 10 * 100;
    printf("\nPorcentagem de aprovacao: %.2f%%\n", porcentagemAprovacao);

    return 0;
}