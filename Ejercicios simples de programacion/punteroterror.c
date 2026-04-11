#include <stdio.h>
int main (){
int n;
int v [5]={1,2,3,4,5};
int *p=v;
for (int i = 0; i < 5; i++){
    printf ("ingresa nuevo numero que cambiar \n");
    scanf ("%d",&n);
    p[i]=n;
}
for (int i = 0; i < 5; i++){
    printf ("los nuevos numeros son... %d ",p[i]);
}
return 0;
}