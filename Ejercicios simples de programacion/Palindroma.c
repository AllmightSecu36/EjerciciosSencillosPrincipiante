#include <stdio.h>
#include <string.h>
#define RED     "\x1b[31m"
#define GREEN   "\x1b[32m"
#define YELLOW  "\x1b[33m"
#define BLUE    "\x1b[34m"
#define RESET   "\x1b[0m"
int main (){
    int parada=0;//Contara cuantas palabras ingresemos
    char palindroma[100];//Es para obtener la palabra del usuario
    char respaldo[100];//Aqui es donde se invertira la palabra
    int j;//este sera el contador de respaldo

    printf(BLUE "=============sistema de identificacion de palindromas/capicuas=============\n" RESET);
    do {

    printf(YELLOW "Ingrese una palabra: " RESET);
    fgets (palindroma, 100, stdin);
    palindroma[strcspn(palindroma, "\n")] = '\0';//con esto limpiamos el \n del enter debido a que strcspn busca el \n y lo remplaza por el \0

    int contador=strlen(palindroma);//aqui digo que contador va a ser igual a la cantidad de caracteres que tenga palindroma
    
    j=0;//iniciamos aqui el j=0 para que se reinicie en la vuelta del bucle do

    for (int i= contador-1; i>=0; i--){ //aqui hago que se cuente de reversa, y coloco contador -1 para que cuando cuente por ejemplo hola lea 4 palabras y no 5
        respaldo[j]=palindroma[i];//aqui copio cada letra del reverso en respaldo
        j++;//va cambiando la posicion de respaldo
    }

    respaldo[j] = '\0';//como no es una declaracion hago esto para cuando termine de copiar al reverso, termine con el \0 y no se buguee

    if (strcmp(palindroma,respaldo)==0){//aqui hago la comparacion para ver si es palindroma o no
        printf(GREEN "Su palabra es palindroma/capicua \n" RESET);
    }
    else{
        printf(RED "Su palabra no es palindroma/capicua \n" RESET);    
    }

    printf ("Desea salir del sistema?(escribe 'si' para salir)\n");//en cada ciclo te saldra esta pregunta por si quieres salir antes del sistema
    scanf ("%s",palindroma);
    getchar ();//esto limpia el enter para que no salte el fgets cuando se repita
    
    if (strcmp(palindroma,"si")==0){
        printf ("Saliendo del sistema...\n");
        return 0;
    }
    parada++;
    }while (parada<=49);//solo parara hasta que cuente las 50 palabras
    printf ("saliendo del sistema...\n");
    return 0;
}