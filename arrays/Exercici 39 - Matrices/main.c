/* 
 * File:   main.c
 * Author: pdavila
 *
 * Created on 17 de enero de 2014, 8:23
 */

#include <stdio.h>
#include <stdlib.h>

// Constantes a utilizar en el programa
#define FILES 3
#define COLUMNES 3

/*
 * Un quadrat màgic és una matriu quadrada amb un nombre imparell de files i columnes, on les
 * files i columnes (i fins i tot les seves diagonals principal i secundària) sumen el mateix valor.
 * Per exemple, la matriu següent és un quadrat màgic de 3 per 3:
 *      6 1 8
 *      7 5 3
 *      2 9 4
 * Els nombres en cada fila, cada columna i cada diagonal sumen 15.
 * Una tècnica que s'utilitza per a generar quadrats màgics és la següent: es comença fixant un
 * valor d'1 en l'element central de la primera fila. A continuació, es van escrivint els successius
 * valors (2, 3, etc.) desplaçant-se des de la posició anterior una fila cap a dalt i una columna cap
 * a l'esquerra. Aquests desplaçaments es realitzen tractant la matriu com si estigués envolta sobre
 * sí mateixa, de forma que moure's una posició cap a dalt des de la fila superior du a la inferior i
 * moure's una posició a l'esquerra des de la primera columna condueix a l'última. Si la nova
 * posició està ja ocupada, en lloc de desplaçar-se una fila cap a dalt i una columna cap a
 * l'esquerra, es mourà simplement una fila cap avall i continuarà el procés.
 * Escriviu un programa que mostri el quadrat màgic de dimensió dim , essent dim un nombre
 * imparell que introdueix l'usuari i està comprés entre 1 i 9.
 */

int main(int argc, char** argv) {
    
    int cuadrado_magico[FILES][COLUMNES];
    int i=0,j=0,vi=0,vj=0;
    int contador=0;
    
    int limite= FILES * COLUMNES;
    int lim_i = FILES - 1;
    int lim_j = COLUMNES - 1;
    
    i = FILES / 2;
    j = 0;
    
    // Inicializar los valores de la matriz a 0
    for(i=0;i<FILES;i++){
        for(j=0;j<COLUMNES;j++)
            cuadrado_magico[i][j] = 0;
    }
    
    for(contador=1;contador<=limite;contador++) {
        
        cuadrado_magico[i][j] = contador;

        vi = i;
        vj = j;

        i++;

        if (i > lim_i) 
            i = 0;

        j--;

        if (j < 0) 
            j = lim_j;

        if(cuadrado_magico[j][i] > 0) {
            i = vi;
            j = vj + 1;
        }      
    }
    
    printf("Cuadrado magico: \n");
    for(i=0;i<FILES;i++) {
        for(j=0;j<COLUMNES;j++)
            printf(" %3d ", cuadrado_magico[i][j]);
        printf("\n");
    }

    return (EXIT_SUCCESS);
}

