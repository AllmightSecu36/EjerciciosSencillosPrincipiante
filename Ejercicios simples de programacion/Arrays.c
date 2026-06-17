#include <stdio.h>
#define BLUE "\033[0;34m"
#define VERDE "\033[0;32m"
#define AMARILLO "\033[0;33m"
#define RESET "\033[0m"

int main () {
    int arreglo [5]= {3, 8, 7, 1, 0};
    printf (VERDE"===Demostracion de arreglos=== \n"RESET);
    printf (BLUE"Los elementos de el arreglo son: "RESET);
    for (int i=0 ;i<5 ;i++){
        printf (AMARILLO"%d  ",arreglo[i],RESET);
    }
    return 0;
}