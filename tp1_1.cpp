#include <stdlib.h>
#include <stdio.h>

int main(){

    printf("\tHola mundo");
    int variable = 5;
    int *pVariable;
    pVariable = &variable;
    int tamanio = sizeof(variable);

    printf("\n Contenido del puntero: %i", *pVariable);
    printf("\n Direccion de memoria almacenada por el puntero: %p", pVariable);
    printf("\n Direccion de memoria de la variable: %p", &variable);
    printf("\n Direccion de memoria del puntero: %p", &pVariable);
    printf("\n Tamanio de la memoria utilizada por la variable: %i", tamanio);


    return 0;
}