/* 
 * File:   main.c
 * Author: pdavila
 *
 * Created on 15 de noviembre de 2013, 9:51
 */

#include <stdio.h>
#include <stdlib.h>

/*
Escriviu un programa que sol·liciti a l'usuari la longitud i amplària d'una habitació i a
continuació visualitzi la seva superfície amb quatre decimals.
 */
int main(int argc, char** argv) {
    
    float longitud, altura;
    float superficie;
    
    printf("Introduce la longitud y la altura de la habitación: ");
    scanf("%f %f", &longitud, &altura);
    
    superficie = longitud * altura;
    
    printf("\nLa superficie de la habitación es %4f cm²", superficie);

    return (EXIT_SUCCESS);
}

