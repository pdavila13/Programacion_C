/* 
 * File:   main.c
 * Author: pdavila
 *
 * Created on 10 de enero de 2014, 9:35
 */

#include <stdio.h>
#include <stdlib.h>
#define FILES 15
#define COLUMNES 15

/*
 * Exercici 23 - Matriu
 * 
 * Dissenyeu un programa que
 * a) Creï una matriu de 15x15 i nom diagonal.
 * b) Carregui la matriu de forma que els components que pertanyen a la diagonal agafin el valor 1 i la resta el valor 0.
 * c) Mostri el seu contingut en pantalla.
 */
int main(int argc, char** argv) {
    
    int i,j;
    int diagonal[FILES][COLUMNES];
    
    for (i=0;i<FILES;i++) {
        for (j=0;j<COLUMNES;j++) {
            //if (i==J) --> hara sola una diagonal!!!
            if (i==j || i+j==FILES-1) // muestra dos diagonales (FILES o COLUMNES)
                printf("%3d", diagonal[i][j]=1);
            else
                printf("%3d", diagonal[i][j]=0);
        }
        printf("\n");
    }
    

    return (EXIT_SUCCESS);
}

