/* 
 * File:   main.c
 * Author: pdavila
 *
 * Created on 22 de enero de 2014, 10:29
 */

#include <stdio.h>
#include <stdlib.h>
#define LOG_CAD 10

/* 
 * Exercici 3 - Cadenas
 * 
 * Escriviu un programa que llegeixi una paraula i calculi la seva longitud.
 * 
 */

int main(int argc, char** argv) {
    
    char cadena[LOG_CAD];
    int i=1, car;
    
    printf("Introduce una palabra: ");
    scanf("%c", cadena);
    
    while (i<LOG_CAD-1 && (car = getchar())!='\n') {
        cadena[i]=car;
        i++;
    }
    
    cadena[i]=0;
    
    printf("La longitud de la palabra introducida es: %d", i);

    return (EXIT_SUCCESS);
}

