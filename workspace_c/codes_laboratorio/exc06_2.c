#include <stdio.h>
#include <stdlib.h>
#include <locale.h>

//Pesos das notas constantes 
#define lab 2
#define avaliacao 3
#define exame 5

int main(){
    float nota1, nota2, nota3, mediaPonderada;

    printf("Informe a nota do trabalho de Laboratório: \n");
    scanf("%f", &nota1);

    printf("Informe a nota da avaliação semestral: \n");
    scanf("%f", &nota2);

    printf("Informe a nota do exame final: \n");
    scanf("%f", &nota3);    

    mediaPonderada = (nota1 * lab + nota2 * avaliacao + nota3 * exame) / (lab + avaliacao + exame);

    printf("\nMédia Final: %.2f", mediaPonderada);

    if(mediaPonderada >= 8 && mediaPonderada <= 10){
        printf("\nConceito: A");
    }

    else if(mediaPonderada >= 7 && mediaPonderada < 8){
        printf("\nConceito: B");
    }

    else if(mediaPonderada >= 6 && mediaPonderada < 7){
        printf("\nConceito: C");
    }

    else if(mediaPonderada >= 5 && mediaPonderada < 6){
        printf("\nConceito: D");
    }

    else if(mediaPonderada < 5){
        printf("\nConceito: E");
    }

    else{
        printf("\nConceito Inválido");
    }
    return 0;
}