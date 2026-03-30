#include <stdio.h>
#include <string.h>
int main () {
float monto, porcentaje,Total;
char persona[10];
printf ("cuanto es el monto de su compra \n");
scanf ("%f",&monto);
printf ("Usted es estudiante? \n");
scanf ("%s",persona);

if (monto>500 || strcmp(persona,"si")==0 ) {
    porcentaje=(monto*15)/100;
    Total=monto-porcentaje;
    printf ("se le aplico un porcentaje de 15 porciento ahora debe pagar: %.2f \n", Total);}
    else{

    printf ("solo va a pagar: %.2f \n", monto);}

return 0;
}