/* 
 * File:   main.c
 * Author: pdavila
 *
 * Created on 22 de enero de 2014, 10:53
 */

#include <stdio.h>
#include <stdlib.h>
#define LONG_CAD 51

/*
 * Exercici 6 - Cadenas
 * 
 * Realitzeu un programa que llegeixi una frase i transformi les lletres 
 * majúscules a minúscules i viceversa.
 * 
 */
int main(int argc, char** argv) {
    
    char cadena[LONG_CAD];
    int i=1, car;
    
    printf("Introduce una frase: ");
    scanf("%c", cadena);
    
    while (i<LONG_CAD-1 && (car = getchar())!='\0') {
        cadena[i]=car;
        i++;
    }
    
    cadena[i]=0;
    
    printf("El texto introducido es %s", cadena);
    
    for(i=0;cadena[i]!='\0';i++) {
        if(cadena[i]>='a' && cadena[i]<='Z') {
            
        }
    }


    return (EXIT_SUCCESS);
}

