#include <stdio.h>
#include <stdlib.h>
#include <locale.h>

    int main()
    {
        setlocale(LC_ALL, "Portuguese");
        int num;
        printf("Digite um n�mero inteiro: ");
        scanf("%d", &num);

            if(num%2 == 0){
                printf("O n�mero � par");
            }
            else{
                printf("O n�mero � impar");
            }

        return 0;
    }
