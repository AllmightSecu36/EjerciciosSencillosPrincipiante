#include <stdio.h>
int main (){
int capacidad=50,boletos=10,opcion,cantidad=0,numero=0,ventas=0, descuento=0,total=0;
printf ("----VENTA DE BOLETOS PARA VER INTERSTELAR----\n");
do {
    
    printf ("1. Para comprar boletos\n");
    printf ("2. Para mostrar asientos disponibles\n");
    printf ("3. Dinero total recaudado\n");
    printf ("4. Salir del sistema\n");
    printf ("Escoja una opcion:\n");
    scanf ("%d",&opcion);
    switch (opcion) {
    case 1:
        printf ("cuantos boletos deseas comprar?\n");
        scanf ("%d",&cantidad);
        if (cantidad>capacidad){
            printf ("ERROR NO REALIZAR VENTA\n");
        }
        if (capacidad>=cantidad) {
            capacidad-=cantidad;
            numero+=cantidad;
            if (cantidad>=5){
               descuento=cantidad*boletos*0.2;
               ventas=(cantidad*boletos)-descuento;
               total+=ventas;
               printf ("vendido...\n");
            }
            if (cantidad<5){
               ventas=cantidad*boletos;
               total+=ventas;
               printf ("vendido...\n");
            }
        }
        break;
    case 2:
        printf ("Quedan esta cantidad de asientos: %d Y se han vendido esta cantidad de asientos %d\n",capacidad,numero);
        break;
    case 3:
        printf ("La cantidad de dinero recaudado es: %d\n",total);
        break;
    case 4:
        printf ("Saliendo del sistema...");
        return 0;
        break;        
    default:
        printf ("Ingrese una de las 4 opciones \n");
        break;
    }
} while (capacidad!=0);

}