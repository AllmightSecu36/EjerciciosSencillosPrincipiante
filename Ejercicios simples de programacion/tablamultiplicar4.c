#include <stdio.h>
int main () {
    int tabla,i=1;
    printf ("GENERANDO TABLA DEL 5...\n");
    while (i<=10){
        tabla= 5 * i;
        printf ("5 x %d = %d\n",i,tabla);
        i++;
    }
    return 0;
}