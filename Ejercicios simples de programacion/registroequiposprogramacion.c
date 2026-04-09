#include <stdio.h>
#include <string.h>
typedef struct {
char machine_name [100];
int codigo_inventario;
float precio;
}equipo;

int main (){
int equipos;
float total=0;
printf ("===SISTEMA DE REGISTROS DE EQUIPOS TECNOLOGICOS=== \n");

printf ("Cuantos equipos deseas registrar \n");
scanf ("%d", &equipos);
getchar();
equipo lista[equipos];
for (int i=0; i<equipos;i++){
    printf ("Registra numbre de el equipo tecnologico\n");
    fgets (lista[i].machine_name, 100,stdin );
    lista[i].machine_name[strcspn(lista[i].machine_name, "\n")] = 0;

    printf ("registra el codigo para identificar el equipo tecnologico \n");
    scanf ("%d",&lista[i].codigo_inventario);
    getchar ();

    printf ("ingresa precio de de el equipo tecnologico \n");
    scanf ("%f",&lista[i].precio);
    getchar ();
    total=total + lista[i].precio;
}

printf ("===IMPRIMIENDO LISTADO=== \n");

for (int i=0; i<equipos;i++){
    
    printf ("===Equipo: %s -----Codigo: %d ----- Precio: %.2f === \n",lista[i].machine_name, lista[i].codigo_inventario,lista[i].precio);
}
printf ("EL VALOR TOTAL DEL INVENTARIO ES: %f \n",total);
return 0;
}