/* 
 * File:   main.c
 * Author: pdavila
 *
 * Created on 5 de febrero de 2014, 9:58
 */

#include <stdio.h>
#include <stdlib.h>
#define LONG_CAD 51
#define DIM 10

int main(int argc, char** argv) {
    
    char cadena[LONG_CAD];
    int matriu[DIM][DIM];
    int i,j,car;
    
    printf("\nPor favor, introduzca un texto (Máximo 50 caracteres): ");
    scanf("%c", cadena);
    
    while (i<LONG_CAD-1 && (car = getchar())!='\n') {
        cadena[i]=car;
        i++;
    }
    
    cadena[i]=0;
    
    for(i=0;i<DIM;i++) {
        for(j=0;j<DIM;j++)
            if(cadena[i]!=0)
                printf(" %5d ",matriu[i][j]=cadena[i]);
        printf("\n");
    }

    return (EXIT_SUCCESS);
}

