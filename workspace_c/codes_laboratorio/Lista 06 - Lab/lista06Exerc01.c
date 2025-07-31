#include <stdio.h>
#include<stdlib.h>

//Aluno: Pablo Ricardo (20251SI0011)

int main(){
    float nota1, nota2, media, soma_medias=0,  media_turma=0;
    int i, alunos_aprovados=0, alunos_exame=0, alunos_reprovados=0;

    for(i=1; i<=6; i++){
       printf("insira as duas notas: \n");
       scanf("%f %f", &nota1, &nota2);
       media=(nota1+nota2)/2;
       printf("a media do aluno eh: %f\n", media);
       soma_medias+=media;
       if(media<=3){
        printf("reprovado\n");
        alunos_reprovados++;
       }
       else if(media>3 && media<7){
        printf("exame\n");
        alunos_exame++;
       }
       else{
        printf("aprovado\n");
        alunos_aprovados++;
       }
    }
    printf("o total de alunos aprovados eh:%d\n", alunos_aprovados);
    printf("o total de alunos em exame eh:%d\n", alunos_exame);
    printf("o total de alunos reprovados eh:%d\n", alunos_reprovados);
    media_turma=soma_medias/6;
    printf("a media da classe eh:%f\n", media_turma);


    return 0;
}
