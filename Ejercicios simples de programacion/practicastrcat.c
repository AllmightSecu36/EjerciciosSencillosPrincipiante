#include <stdio.h>
#include <string.h>
//empezamos el programa colocando las librerias
int main (){
    //aqui  definimos las 2 cadenas que vamos a concadenar
    char cadena1[100];
    char cadena2[50];
    //solicitar al usuario que ingrese las cadenas
    printf ("Ingrese la primera cadena: \n");
    scanf ("%99s",cadena1);

    printf ("Ingrese segunda cadena: \n");
    scanf ("%99s",cadena2);

    //Concadenamos las cadenas que leimos cadena1 y cadena2
    strcat (cadena1,cadena2);
    //imprimir la cadena resultante
    printf ("La cadena concadenada es: %s\n",cadena1);
    return 0;
}