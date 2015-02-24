/* 
 * File:   main.c
 * Author: pdavila
 *
 * Created on 4 de diciembre de 2013, 10:00
 */

#include <stdio.h>
#include <stdlib.h>

/* 
 * Exericici 32 - EstructuresDeControl
 * 
 * Escriviu un programa que mostri totes les lletres minúscules de l'abecedari.
 */
int main(int argc, char** argv) {
    
    char caracter = 'a';
    
    do {
        printf("%c  ", caracter++);
    } while (caracter<='z');
    
    // for (caracter='a';caracter<='z';caracter++);
    // printf ("%c", caracter);

    return (EXIT_SUCCESS);
}

