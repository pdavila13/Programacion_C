/* 
 * File:   main.c
 * Author: pdavila
 *
 * Created on 22 de enero de 2014, 10:46
 */

#include <stdio.h>
#include <stdlib.h>
#define LONG_CAD 51

/*
 * Exercici 5 - Cadenas
 * 
 * Escriviu un programa que llegeixi un text (format per diverses línies) i 
 * calculi la seva longitud.
 * 
 */
int main(int argc, char** argv) {
    
    char cadena [LONG_CAD];
    int i=1, car;
    
    printf("Introduce un texto: ");
    scanf("%c", cadena);
    
    while (i<LONG_CAD-1 && (car=getchar())!='0') {
        cadena[i]=car;
        i++;
    }
    
    cadena[i]=0;
    
    printf("La longitud del texto es de: %d letras", i);

    return (EXIT_SUCCESS);
}

