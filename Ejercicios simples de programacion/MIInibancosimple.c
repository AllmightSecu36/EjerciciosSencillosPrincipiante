#include <stdio.h>
int main (){
    int proceso, suma, saldo=5000;
    printf ("=====CAJERO AUTOMATICO=====\n");
    for (int i=0; i<10; i++){
    printf ("1. Consultar saldo \n");
    printf ("2. Depositar dinero \n");
    printf ("3. Retirar dinero \n");
    printf ("Seleccione una opcion\n");
    scanf ("%d",&proceso);
    getchar ();
    switch (proceso)
    {
    case 1:
        printf ("SU SALDO ES DE: %d\n",saldo);
        break;
    case 2:
        printf ("Cuanto usted va a depositar?:\n");
        scanf ("%d",&suma);
        getchar ();
        saldo+=suma;
        break;
    case 3:
        printf ("Cuanto dinero desea retirar:\n");
        scanf ("%d",&suma);
        getchar ();
        if (suma>saldo) {
            printf ("ERROR MONTO INSUFICIENTE\n");
        }
        if (suma<=saldo) {
            printf ("RETIRANDO DINERO...\n");
            saldo-=suma;
        }
        break;
    default:
        printf  ("SELECCIONE UNA DE OPCION...\n");
        break;
    }
    }
    printf ("Cerrando sistema \n");
    return 0;
}