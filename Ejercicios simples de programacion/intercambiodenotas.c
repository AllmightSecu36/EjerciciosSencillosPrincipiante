#include <stdio.h>
void intercambiar (int *a, int *b){
    int aux;
    aux=*a;
    *a=*b;
    *b=aux;
}
int main (){
    int nota1,nota2;
    printf ("ingrese sus 2 notas \n");
    scanf ("%d %d",&nota1,&nota2);
    printf("Tu primera nota es: %d  Tu segunda nota es: %d \n",nota1,nota2);
    intercambiar (&nota1,&nota2);
    printf("VALORES FINALES -> Nota 1: %d, Nota 2: %d\n", nota1, nota2);
    return 0;
}