#include <stdio.h>
#include <stdlib.h>

int main()
{
    int i, j;
    float nota, somaNotas, media, somaMedias;

    somaMedias = 0;

    for(i = 1; i <= 5; i++){

        somaNotas = 0;
        printf("\nALUNO %d\n", i);
        for(j = 1; j<= 3; j++){


        printf("Informe a nota %d: ", j);
        scanf("%f", &nota);
        somaNotas += nota;

        }
        media = somaNotas / 3;
        printf("\nA media do aluno %d eh: %.2f\n", i, media);
        somaMedias += media;

    }

    printf("\nA media da turma eh %.2f", somaMedias/5);

    return 0;
}
