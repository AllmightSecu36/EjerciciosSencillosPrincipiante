#include <stdio.h>
int main (){
    int stock=100, sumres, opcion;
    printf("===GESTION STOCK ALMACEN DE RAM===\n");
    for (int i = 0; i < 8; i++) {
        printf("1. Consultar inventario\n");
        printf("2. Ingresar mercancia\n");
        printf("3. Despachar pedido\n");
        printf("4. Salir del sistema\n");
        printf("Seleccione una opcion: \n");
        scanf("%d", &opcion);
        switch (opcion) {
        case 1:
            printf ("Usted tiene esta cantidad de RAM en su inventario: %d\n", stock);
            break;
        case 2:
            printf ("Cuanta mercancia quiere agregar al inventario: \n");
            scanf ("%d",&sumres);
            stock+=sumres;
            break;
        case 3:
            printf ("Cuanta mercancia desea retirar del inventario: \n");
            scanf ("%d",&sumres);
            if (sumres<=stock && sumres>0){
                stock-=sumres;
            }
            else {
                printf ("ERROR RETIRE UNA CANTIDAD MENOR O IGUAL AL NUMERO DEL INVENTARIO\n");
            }
            break;
        case 4:
            printf ("Saliendo del sistema... \n");
            return 0;
            break;        
        default:
        printf ("Ingrese una de las 4 opciones\n");
            break;
        }
    }
    return 0;
}