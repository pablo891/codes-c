#include <stdio.h>
#include <stdlib.h>
#include <locale.h>

int main()
{
    setlocale(LC_ALL, "Portuguese");
    int contador;
    float nota, mediaTurma, total;

    for(contador = 1; contador <= 5; contador++){
        printf("Informe a nota do aluno %d: ", contador);
        scanf("%f", &nota);
        total += nota;
    }

    mediaTurma = total / 5;
    printf("Média da Turma: %2.f", mediaTurma);

    return 0;
}
