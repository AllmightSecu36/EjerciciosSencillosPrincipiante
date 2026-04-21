#include <stdio.h>
int main (){
    float n1, n2, n3, mayor=0, prome=0;
    int opcion;
    printf ("===Bienvenido al sistema===\n");
    printf ("Ingrese 3 notas entre 0 a 20\n");
    scanf ("%f %f %f",&n1,&n2,&n3);
    while (opcion!=3){
        printf ("--Menu de opciones--\n");
        printf ("1. Promedio de las notas\n");
        printf ("2. Nota con mayor valor\n");
        printf ("3. Salir del sistema...\n");
        scanf ("%d",&opcion);
        switch (opcion) {
        case 1:
            prome=(n1+n2+n3)/3;
            printf ("El promedio de sus notas es: %.2f\n",prome);
            break;
        case 2:
            if (mayor<n1){
                mayor=n1;
            }
            if (mayor<n2){
                mayor=n2;
            }
            if (mayor<n3){
                mayor=n3;
            }
            printf ("La nota de mayor valor es: %.2f\n",mayor);
            break;
        case 3:
            printf ("Saliendo del sistema...\n");
            return 0;  
            break;  
        default:
            printf ("Error ingrese una de las 3 opciones...\n");
            break;
        }
    }
    return 0;
}