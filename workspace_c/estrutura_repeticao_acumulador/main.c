#include <stdio.h>
#include <stdlib.h>

int main()
{
    int contador;
    float nota, somaNotas, mediaTurma;

    somaNotas = 0;
    contador = 1;

    while(contador <= 10){
        printf("Digite a nota: ");
        scanf("%f", &nota);
        somaNotas += nota;
        contador++;
    }

    mediaTurma = somaNotas / 10;

    printf("\nA media da turma eh %.2f\n", mediaTurma);

    return 0;
}
