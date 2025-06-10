#include<stdio.h>
#include<stdlib.h>
#include<locale.h>

int main(){
    setlocale(LC_ALL, "Portuguese");
    int senha, senhaCorreta;
    char usuario[50];

    senhaCorreta = 1234;

    printf("Digite seu usuário: ");
    scanf("%s", usuario);

    printf("\nOlá, %s! \n");

    while (senha != senhaCorreta){
        printf("\nDigite a senha de acesso: ");
        scanf("%d", &senha);

        printf("Senha inválida");
    }

    
    if(senha == senhaCorreta){
        printf("\nAcesso permitido.");
    }       
    
}