#include <stdio.h>
int main () {
    int numbers,calculo;
    calculo=0;
    printf ("Ingresa un numero entero \n");
    scanf ("%d",&numbers);
    while (numbers>=0) {
    calculo=calculo+numbers;
    printf ("ingresa otro numero entero para sumar \n");
    scanf ("%d",&numbers);
    }
    printf ("El total de todos los numeros sumados es: %d \n",calculo);
    return 0;
}