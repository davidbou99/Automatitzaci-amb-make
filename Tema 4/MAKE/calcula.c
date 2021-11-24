#include "calc.h"

int main(){
    int a, b;

    printf("Introduce los 2 operandos: ");
    scanf("%d %d", &a,&b);

    printf("La suma entre %d y %d es: %d",a,b,suma(a,b));
    printf("La resta entre %d y %d es: %d",a,b,resta(a,b));
    printf("La multi entre %d y %d es: %d",a,b,multi(a,b));
    printf("La divi entre %d y %d es: %d",a,b,divi(a,b));

    printf("El mayor de %d y %d es: %d",a,b,mayor(a,b));

    return 0;
}