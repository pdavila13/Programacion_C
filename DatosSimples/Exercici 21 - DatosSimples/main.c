/* 
 * File:   main.c
 * Author: pdavila
 *
 * Created on 15 de noviembre de 2013, 9:46
 */

#include <stdio.h>
#include <stdlib.h>

/*
Escriviu un programa que llegeixi dos enters en les variables x i y, i a continuació 
obtingui els valors de x / y i de x % y. Executeu el programa vàries vegades amb diferents 
parells d'enters com a entrada.
 */
int main(int argc, char** argv) {
    
    int x, y;
    int div, mod;
    
    printf("Introduce dos valores enteros: ");
    scanf("%d %d", &x, &y);
    
    div = x/y;
    mod = x%y;
    
    printf("\nEl resultado de la división es %d y del módulo es %d", div, mod);

    return (EXIT_SUCCESS);
}

