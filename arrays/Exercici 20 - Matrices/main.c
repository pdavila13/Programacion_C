/* 
 * File:   main.c
 * Author: pdavila
 *
 * Created on 10 de enero de 2014, 8:47
 */

#include <stdio.h>
#include <stdlib.h>
#define FILES 10
#define COLUMNES 10

/*
 * Exercici 20 - Matriu
 * 
 * Escriviu un programa que declari una matriu de 10x10 elements de tipus enter i l'empleni de la següent forma:
 * 
 *       1 2 3 4 5 6 7 8 9 10
 *      11 12 13 14 15 16 17 18 19 20
 *      21 22 23 24 25 26 27 28 29 30  
 *      ...
 *      91 92 93 94 95 96 97 98 99 100
 */
int main(int argc, char** argv) {
    
    int i, j;
    int matriu [FILES] [COLUMNES];
    int contador=1;
    
    for (i=0;i<FILES;i++) {
        for (j=0;j<COLUMNES;j++){
            //if(j==0)
            // printf(" %3d ", matriu[i][j]=(j+1)+4*i);
            printf(" %3d ", matriu[i][j]=contador++);
        }
        printf("\n");
    }
    return (EXIT_SUCCESS);
}

