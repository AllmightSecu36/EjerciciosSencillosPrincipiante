#include <stdio.h>
int main () {
    int opciones;
    printf ("1 para Saludar \n");
    printf ("2 para Despedirse \n");
    printf ("3 para Salir \n");

    while (opciones != 3) {
      printf ("Escoje una opcion \n");
      scanf ("%d", &opciones);
      
      switch (opciones){
        case 1: printf ("Hola amiguito :) \n");break;
        case 2: printf ("Adios Camarada :D \n");break;
        case 3: printf ("Saliendo del programa :( \n");break;
        default:
         printf ("ingrese una de las 3 opciones \n");break;
      }
    }
    return 0;
}