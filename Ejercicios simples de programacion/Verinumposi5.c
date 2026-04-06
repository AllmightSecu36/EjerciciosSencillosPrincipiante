#include <stdio.h>
int main () {
int num1, num2;
printf ("Dame dos numeros \n");
scanf ("%d %d",&num1, &num2);
if (num1>0 && num2>0){
    printf ("Ambos numeros son positivo \n");
}
else {
        printf ("al menos un numero es positivo \n"); }
return 0;        
}