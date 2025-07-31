#include <stdio.h>
#include <stdlib.h>
#include <math.h>

//Autor: Pablo Ricardo - 20251SI0011    
float raizes(float a, float b, float c, float *x1, float *x2) {
    float delta;

    delta = (b * b) - 4 * a * c;

    if (delta > 0) {
        *x1 = (-b + sqrt(delta)) / (2 * a);
        *x2 = (-b - sqrt(delta)) / (2 * a);
    } 
    else if (delta == 0) {
        *x1 = *x2 = (-b) / (2 * a);
    }

    return delta;
}

int main() {
    float a, b, c, x1, x2, delta;

    printf("Digite o valor de A: ");
    scanf("%f", &a);

    printf("Digite o valor de B: ");
    scanf("%f", &b);

    printf("Digite o valor de C: ");
    scanf("%f", &c);

    delta = raizes(a, b, c, &x1, &x2);

    if (delta > 0) {
        printf("Duas raízes reais: x1 = %.2f, x2 = %.2f\n", x1, x2);
    } else if (delta == 0) {
        printf("Uma raiz real: x = %.2f\n", x1);
    } else {
        printf("Não existem raízes reais.\n");
    }

    return 0;
}
