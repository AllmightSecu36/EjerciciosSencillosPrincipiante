#include <stdio.h>
#include <string.h>
int main () {
int edad;
char nacionalidad [30];
printf ("===SISTEMA DE VOTACION VENEZOLANO=== \n");
printf ("Ingrese su edad \n");
scanf ("%d",&edad);
printf ("Es usted de nacionalidad venezolana? \n");
scanf ("%s", nacionalidad);
if (edad>=18 && strcmp(nacionalidad,"si")==0){
    printf ("===USTED PUEDE VOTAR=== \n");
}
else {
    printf ("===USTED NO PUEDE VOTAR=== \n");
}
return 0;
}