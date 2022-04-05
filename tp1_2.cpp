#include <stdlib.h>
#include <stdio.h>

float cuadrado(float numero);
void cuadradoVoid(float numero);
void invertir(int a, int b);
void ordenar(int a, int b);

int main(){

    float numero, numeroCuadrado;
    int a, b;
    printf("\nFuncion 1");
    printf("\nPor favor ingrese un numero para obtener su cuadrado: ");
    scanf("%f", &numero);
    numeroCuadrado = cuadrado(numero);
    printf("\nCuadrado del numero: %f", numeroCuadrado);

    printf("\n\nFuncion 2 ");
    cuadradoVoid(numero);

    printf("\n\nPunto C)");
    printf("\nDireccion de la variable: %p", &numero);
    printf("\nContenido de la variable: %f", numero);

    printf("\n\nPunto D)");
    printf("\nIngrese el primer numero: ");
    scanf("%i", &a);
    printf("\nIngrese el segundo numero: ");
    scanf("%i", &b);

    printf("\nDireccion de las variables  a:  %p   b:  %p", &a, &b);
    printf("\nContenido de las variables  a:  %i   b:  %i", a, b);

    printf("\nFuncion invertir: ");
    invertir(a, b);

    printf("\nFuncion ordenar: ");
    ordenar(a, b);

    



    return 0;
}

float cuadrado(float numero){
    float auxiliar;
    auxiliar = numero * numero;
    return auxiliar;
}

void cuadradoVoid(float numero){
    float auxiliar;
    auxiliar = numero * numero;
    printf("\nEl cuadrado del numero es: %f", auxiliar);
}

void invertir(int a, int b){
    int auxiliar;
    auxiliar = a;
    a = b;
    b = auxiliar;

    printf("Los valores invertidos son a: %i y b: %i", a, b);
}

void ordenar(int a, int b){
    int mayor, menor;
    if(a>b){
        mayor = a;
        menor = b;
    }else{
        menor = a;
        mayor = b;
    }

    printf("\n Ambos numeros ordenados de menor a mayor: %i - %i", menor, mayor);
}