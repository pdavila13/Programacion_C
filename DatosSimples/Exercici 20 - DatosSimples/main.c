/* 
 * File:   main.c
 * Author: pdavila
 *
 * Created on 15 de noviembre de 2013, 9:42
 */

#include <stdio.h>
#include <stdlib.h>

/*
Escriviu un programa que llegeixi dos enters dintre de dues variables, intercanviï 
els valors de les dues variables mitjançant sentències d'assignació, i a continuació 
mostri el resultat.
 */
int main(int argc, char** argv) {
    
    int a, b;
    
    printf("Introduce dos valores enteros: ");
    scanf("%d %d", &a, &b);
    
    a==b && b==a;
    
    printf("\nLos resultados intercambiados son: %d %d", a, b);

    return (EXIT_SUCCESS);
}

