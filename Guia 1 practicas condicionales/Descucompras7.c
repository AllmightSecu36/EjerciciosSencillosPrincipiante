#include <stdio.h>
#include <string.h>
int main () {
char miembro [10];
float compra, porcent, total;
printf ("Cuanto es el monto de su compra? \n");
scanf ("%f", &compra);
printf ("Usted es miembro del club de compras? \n");
scanf ("%s", miembro);
if (compra>1000 && strcmp(miembro, "si")==0) {
    porcent=compra*0.1;
    total=compra-porcent;
    printf("Se le aplico un descuento del 10%, su monto total ahora es: %.2f  \n",total);
}
else {
    printf ("No se le aplico un descuento, su monto total a pagar es: %.2f \n",compra);}
return 0;
}