/* 
 * File:   main.c
 * Author: pdavila
 *
 * Created on 10 de enero de 2014, 9:49
 */

#include <stdio.h>
#include <stdlib.h>
#define FILES 5
#define COLUMNES 15

/*
 * Exercici 24 - Matriu
 * 
 * Dissenyeu un programa que
 * a) Creï una matriu de 5x15 i nom marc.
 * b) Carregui la matriu amb dos únics valors 0 i 1, on el valor 1 ocupi les posicions que delimiten la matriu, és a dir, les més externes, mentre que la resta dels elements contindran el valor 0.
 * c) Visualitzeu el contingut de la matriu en pantalla:
 */
int main(int argc, char** argv) {
    
    int i,j;
    int marc[FILES][COLUMNES];
    
    for (i=0;i<FILES;i++){
        for (j=0;j<COLUMNES;j++) {
            if (i==j || i+j==1) 
                printf("%3d", marc[i][j]);
            
        }
        printf("\n");
    }

    return (EXIT_SUCCESS);
}

