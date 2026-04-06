//escribe un programa que lea un numero entero positivo n y muestre en pantalla la suma de todos los numeros impares desde el 1 hasta n.Utilizando bucle for
#include <stdio.h>
int main() {
    int entero, suma=0;
    printf ("dame un numero entero: \n");
    scanf ("%d", &entero);
    for (int i=1; i<=entero; i++){
      if (i %2 !=0){
        printf ("%d ", i);
        suma=suma+i;
      }
    }
    printf (" =");
    printf (" %d\n", suma);
}