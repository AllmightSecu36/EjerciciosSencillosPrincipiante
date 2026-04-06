#include <stdio.h>
int main () {
    float num1,num2,num3,promedio;
    printf ("ingresa tres de tus notas para calcular su promedio de 1-10 \n");
    scanf ("%f %f %f",&num1,&num2,&num3);
    promedio=(num1+num2+num3)/3;
    if (promedio>=4 && num1>=4 && num2>=4 && num3>=4) {
        printf ("Usted aprobo con:  %.2f \n",promedio);
    }
        else {
        printf ("Usted no aprobo \n");
        }
return 0;    
}