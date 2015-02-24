/* 
 * File:   main.c
 * Author: pdavila
 *
 * Created on 4 de febrero de 2014, 21:19
 */

#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#define LONG_CAD 41

/*
 * Paolo Davila
 */

int main(int argc, char** argv) {
    char cadena[LONG_CAD];
    char posicion,palabra,i,car;
    
    printf("Introduce un texto: ");
    scanf("%c", cadena);
    
    while (i<LONG_CAD-1 && (car = getchar())!='.') {
        cadena[i]=car;
        i++;
    }
    
    cadena[i]=0;
    
    printf("Introduzca la palabra a buscar: ");
    scanf("%s", &palabra);
    
    if (posicion){
        printf("La palabra %c esta en el posición: %d\n", palabra, posicion);
    } else
        printf("La palabra no esta en el texto\n");
    
    return 0;
}


