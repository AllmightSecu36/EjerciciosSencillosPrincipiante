#include <stdio.h>
int main(){
int num1,num2;
printf ("Dame 2 numeros para determinar si son pares o impares \n");
scanf ("%d %d",&num1,&num2);
if (num1 %2 ==0 && num2 %2==0){
    printf ("Ambos numeros son pares \n"); }
else{
    printf ("Al menos uno de los numeros no es par \n");
}
return 0;
}