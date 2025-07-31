#include<stdio.h>
#include<stdlib.h>
#include<locale.h>

float calcularTaxa(float horas){
    float taxa = 1.5, taxaPagar;
    
    taxaPagar = 10;

    if (horas  <=3){
        taxaPagar = 10;
    }

    else if(horas > 3 && horas <= 8){
        taxaPagar += (taxa * (horas - 3));
    }

    else if(horas > 8 && horas <= 24){
        taxa = 20;
        taxaPagar = taxa;
    }

    return taxaPagar;   
}

int main(){
    int contadorCliente;
    float horas, valorFinal;
    char cliente[15];

    for(contadorCliente = 1; contadorCliente <= 5; contadorCliente++){
        printf("\nCLIENTE %d", contadorCliente);
        printf("\nDigite o nome do cliente: ");
        scanf("%s", cliente);

        //VALIDAÇÃO DAS HORAS 
        do{
            printf("\nInforme o tempo de permanência do estacionamento: ");
            scanf("%f", &horas);
        } while(horas <= 0 || horas > 24);


        valorFinal = calcularTaxa(horas);

        printf("%-15s %-10s %-10s\n", "Cliente", "Horas", "Taxa");
        printf("%-15s %-10.1f %-10.2f\n", cliente, horas, valorFinal);

    }

    

}