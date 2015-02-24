/* 
 * File:   main.c
 * Author: pdavila
 *
 * Created on 15 de enero de 2014, 10:40
 */

#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#define FILES 5
#define COLUMNES 5

/*
 * Sumes de veïns. Donada una taula fil x col, com la de la figura adjunta, amb nombres enters, 
 * es tracta de construir una altra taula amb el contingut de totes les sumes dels seus veïns.
 * 
 * Anomenarem veïns a les caselles que estiguin a sobre, a sota, a la dreta, a l’esquerra o en
 * diagonal. S’ha de tenir en compte que no totes les cel·les tenen el mateix nombre de veïns. Per
 * exemple, la casella de dalt a l’esquerra té només tres veïns mentre que una casella central en té
 * vuit, com es pot veure a la figura anterior.
 * 
 * A l'exemple proposat, el resultat de la primera casella hauria de ser: 2 + 4 + 2 = 8.
 * 
 * El resultat de la casella de la quarta fila, quarta columna, hauria de ser: 6 + 5 + 4 + 4 + 2 + 0 + 5 + 8 = 34.
 */
int main(int argc, char** argv) {
    
    int i,j, k, l, suma; 
    int matriu[FILES][COLUMNES];
    int veins [FILES][COLUMNES];
    
    srand(time(0)); //Inicialització numeros aletoris
    
    printf("Primera matriz: \n");
    for(i=0;i<FILES;i++) {
        for(j=0;j<COLUMNES;j++)
            printf(" %3d ", matriu[i][j]=rand()%5);
        printf("\n");
    }
    
    printf("\nResultado: \n");
    for(i=0;i<FILES;i++) {
        for(j=0;j<COLUMNES;j++){
            suma=0;
            for(k=i-1;k<=i+1 && k!=FILES;k++)
                for(l=j-1;l<=j+1 && l!=COLUMNES;l++)
                    if (k>=0 && l>=0 && !(i==k && j==l))
                        suma=suma+matriu[k][l];
                printf(" %3d ", veins[i][j]=suma);
        }
        printf("\n");
    }

    return (EXIT_SUCCESS);
}

