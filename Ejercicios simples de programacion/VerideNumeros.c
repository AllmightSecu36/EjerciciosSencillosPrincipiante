#include <stdio.h>
int main () {
int num1, num2;
printf ("Dame dos numeros enteros \n");
scanf ("%d %d",&num1,&num2);
if (num1>10 && num2>10)
    printf ("Ambos numeros son mayores que 10. \n");
else  
    printf ("Al menos uno de los numeros no es mayor que 10. \n");
return 0;
}  