#include <stdio.h>
#include <stdlib.h>
#include <locale.h>

    int main()
    {
        setlocale(LC_ALL ,"Portuguese");
        int i;
        float a, b, c;

        printf("Digite o número A: ");
        scanf("%f", &a);

        printf("Digite o número B: ");
        scanf("%f", &b);

        printf("Digite o número C: ");
        scanf("%f", &c);


        printf("Tabela de I\n1- Ordem crescente.\n2- Ordem decrescente.\n3- O maior fica entre os dois números.\n");
        printf("Digite o valor de I: ");
        scanf("%d", &i);

        switch(i){
            //Caso 1 - Ordem crescente
        case 1:
                if (a > b && b > c) {
                printf("Ordem Crescente: %f, %f e %f", c, b, a);
                    }

                    else{
                        if(a < b &&  a > c){
                            printf("Ordem Crescente: %f, %f e %f", c, a, b);
                        }
                        else{
                            if(a < b && b < c){
                                printf("Ordem Crescente: %f, %f e %f", a, b, c);
                            }
                            else{
                                if(c < b && a < c){
                                    printf("Ordem Crescente: %f, %f e %f", a, c, b);
                                }
                                else{
                                    if(c > a && a > b){
                                        printf("Ordem Crescente: %f, %f e %f", b, a, c);
                                        }
                                    else{
                                        if(c > b && a > c){
                                            printf("Ordem Crescente: %f, %f e %f", b, c, a);
                                        }
                                        else{
                                            printf("Existem números iguais");
                                        }
                                    }
                                }
                            }
                        }
                    }
                    break;
            //Caso 2 - Ordem decrescente
            case 2:
                if (a > b && c < b) {
                printf("Ordem Crescente: %f, %f%, %f", a, b, c);
                }

                else{
                    if(a < b &&  a > c){
                        printf("Ordem Crescente: %f, %f e %f", b, a, c);
                    }
                    else{
                        if(a < b && b < c){
                            printf("Ordem Crescente: %f, %f e %f", c, b, a);
                        }
                        else{
                            if(c < b && a < c){
                                printf("Ordem Crescente: %f, %f e %f", b, c, a);
                            }
                            else{
                                if(c > a && a > b){
                                    printf("Ordem Crescente: %f, %f e %f", c, a, b);
                                    }
                                else{
                                    if(c > b && a > c){
                                        printf("Ordem Crescente: %f, %f e %f", a, c, b);
                                    }
                                    else{
                                        printf("Existem números iguais");
                                    }
                                }
                            }
                        }
                    }
                }
                break;

                //Caso 3: Maior valor entre dois números
            case 3:
                if (a > b && c < b) {
                printf("Ordem Crescente: %f, %f, %f", b, a, c);
                }

                else{
                    if(a < b &&  a > c){
                        printf("Ordem Crescente: %f, %f e %f", a, b, c);
                    }
                    else{
                        if(a < b && b < c){
                            printf("Ordem Crescente: %f, %f e %f", b, c, a);
                        }
                        else{
                            if(c < b && a < c){
                                printf("Ordem Crescente: %f, %f e %f", c, b, a);
                            }
                            else{
                                if(c > a && a > b){
                                    printf("Ordem Crescente: %f, %f e %f", a, c, b);
                                    }
                                else{
                                    if(c > b && a > c){
                                        printf("Ordem Crescente: %f, %f e %f", c, a, b);
                                    }
                                    else{
                                        printf("Existem números iguais");
                                    }
                                }
                            }
                        }
                    }
                }
            break;
        // Fim do Switch-Case
        }
        return 0;
    }
