#include <stdio.h>
int main () {
    int nota;
    printf ("Escribir nota que sea 10, 15, 17 o 20 fuera de esos numeros no se leera \n");
    scanf ("%d",&nota);

    switch (nota) {
    case 10: printf("bien,puedes seguir mejorando \n"); break;
    case 15: printf("Aprobado, buen trabajo \n"); break;
    case 17: printf("Muy bien, sigue asi \n"); break;
    case 20: printf("Excelente \n"); break;
    default:
    printf ("nota invalida \n"); break;
    }
    return 0;
}