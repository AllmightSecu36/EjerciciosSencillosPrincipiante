#include <stdio.h>
int main () {
    int lado1,lado2,lado3;
    printf ("Ingrese las 3 longitudes de los lados de un triangulo \n");
    scanf ("%d %d %d",&lado1,&lado2,&lado3);
    if (lado1==lado2 && lado2==lado3){
        printf ("tu triangulo es equilatero \n");
    }
    else if (lado1==lado2 || lado1==lado3 ||lado2==lado3){
        printf ("tu triangulo es isosceles \n");
    }
    else {
        printf ("tu triangulo es escaleno \n");
    }
return 0;    
}