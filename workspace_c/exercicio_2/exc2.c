#include <stdio.h>
#include <stdlib.h>
#include <locale.h>

    int main()
    {
        setlocale(LC_ALL, "Portuguese");
        int a, b, c;

        printf("Digite o valor de A:");
        scanf("%d", &a);

        printf("Digite o valor de B: ");
        scanf("%d", &b);

        printf("Digite o valor de C: ");
        scanf("%d", &c);


            if (a > b && b > c) {
                printf("Ordem Crescente: %d, %d% e %d", c, b, a);
            }

            else{
                if(a < b &&  a > c){
                    printf("Ordem Crescente: %d, %d e %d", c, a, b);
                }
                else{
                    if(a < b && b < c){
                        printf("Ordem Crescente: %d, %d e %d", a, b, c);
                    }
                    else{
                        if(c < b && a < c){
                            printf("Ordem Crescente: %d, %d e %d", a, c, b);
                        }
                        else{
                            if(c > a && a > b){
                                printf("Ordem Crescente: %d, %d e %d", b, a, c);
                                }
                            else{
                                if(c > b && a > c){
                                    printf("Ordem Crescente: %d, %d e %d", b, c, a);
                                }
                                else{
                                    printf("Existem números iguais");
                                }
                            }
                        }
                    }
                }
            }

            return 0;
    }
