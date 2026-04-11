//Escribe un programa en Lenguaje C que permita gestionar las notas de una 
//pequeña muestra de tu sección. El programa debe cumplir con los siguientes requerimientos:
#include <stdio.h>
typedef struct {
int cedula;
float notas;
char nombre[100];
}datos;

int main (){
    int n, maxcedula=0,aprobados=0,reprobados=0;
    float promedio=0,suma=0,max=0;
    printf ("Cuantos estudiantes se van a registrar?\n");
    scanf ("%d",&n);
    datos lista[n];
    for (int i=0;i<n;i++){
      printf ("Ingresa nombre del estudiante \n");
      scanf (" %[^\n]",lista[i].nombre);
      printf ("ingresa cedula del estudiante \n");
      scanf ("%d",&lista[i].cedula);
      printf ("ingresa nota del estudiante entre 0-20 \n");
      scanf ("%f", &lista[i].notas);

      do{
        if (lista[i].notas<0 || lista[i].notas>20){
            printf ("error nota fuera de rango \n");
            lista[i].notas = 0;
            printf ("ingresa nota entre 0-20 \n");
            scanf ("%f", &lista[i].notas);
        }
      }while (lista[i].notas<0 || lista[i].notas>20);

      suma+= lista[i].notas;

      if (max<=lista[i].notas){
        max= lista[i].notas;
        maxcedula=0 + lista[i].cedula;
      }
      if (lista[i].notas>=10){
        aprobados=aprobados+1;
      }
      else{
        reprobados=reprobados+1;
      }
    }
    promedio=suma/n;
    printf ("El promedio general del grupo es: %.2f\n",promedio);
    printf ("La nota mas alta del grupo junto a su cedula es: CEDULA: %d  NOTA: %f\n",maxcedula,max);
    printf ("La cantidad de aprobados es: %d       La cantidad de reprobados es: %d\n",aprobados,reprobados);
    return 0;
}