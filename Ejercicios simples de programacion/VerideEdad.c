#include <stdio.h>
int main () {
int edad;
printf ("Por favor dame su edad \n");
scanf ("%d",&edad);

if (edad>18 && edad<65)
    printf ("Edad valida \n");
else
    printf ("Edad invalida \n");
return 0;
}
