#include <stdio.h>
#include <stdlib.h>

//Aluno: Pablo Ricardo (20251SI0011)

int main(){

    int i,j, idade, qtdMenos18 = 0, qtdMais80 = 0, totalJogadores = 0;
    float peso, altura, mediaIdade, mediaAltura, porcentagemMais80, somaAltura = 0;



    for(i=1; i<=5; i++){
        float somaIdadeTime = 0;
        printf("---Time %d---\n", i);

        for(j=1; j<=11; j++){
            printf("idade jogador %d: \n", j);
            scanf("%d", &idade);

            printf("peso jogador %d: \n", j);
            scanf("%f", &peso);

            printf("altura jogador %d : \n", j);
            scanf("%f", &altura);

            if(idade < 18){
                qtdMenos18++;
            }

            if(peso > 80){
                qtdMais80++;
            }

            somaIdadeTime += idade;
            somaAltura += altura;
            totalJogadores++;
        }

        mediaIdade = somaIdadeTime / 4.0;
        printf("a media das idades do time %d: %.2f\n", i, mediaIdade);
    }

    mediaAltura = somaAltura / totalJogadores;
    porcentagemMais80 = qtdMais80 * 100 / totalJogadores;
    printf("a porcentagem de jogadores com mais de 80kg eh: %.2f%%\n", porcentagemMais80);
    printf("a quantidade de jogadores com menos de 18 anos eh: %d\n", qtdMenos18);
    printf("a media das alturas dos jogadores eh: %.2f\n", mediaAltura);




    return 0;
}