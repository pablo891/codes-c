#include <stdio.h>
#define pi 3.14

float conversaoGrausRadianos(float radiano){
    return radiano * (180/pi);
}

int main(){
    float radiano;

    printf("Informe o ângulo em radiano:  ");
    scanf("%f", &radiano);

    printf("Ângulo em graus: %.2f graus", conversaoGrausRadianos(radiano));
}