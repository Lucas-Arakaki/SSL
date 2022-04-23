#include <stdio.h>
#include <stdlib.h>

int main(){
    char nombre[20];
    int edad;
    printf ("Ingrese su nombre y edad:\nNombre:");
    scanf ("%s",nombre);
    printf ("Edad:");
    scanf ("%d",&edad);
    printf ("Su nombre es %s y tiene %d anios de edad\n",nombre,edad);
    system("pause");
    return 0;

}