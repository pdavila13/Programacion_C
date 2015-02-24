/* 
 * File:   main.c
 * Author: pdavila
 *
 * Created on 10 de enero de 2014, 8:38
 */

#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#define DIM 15

/*
 * Ejercicio 5 - Vectores
 * 
 * Feu un programa que:
 * a) Creï un vector de 15 elements de tipus enter i el carregui amb valors aleatoris (funció random()).
 * b) Calculi la suma i la mitjana dels N primers elements del vector. El valor de N es demanarà a l'usuari i no podrà ser major de 15.
 * c) Mostri els resultats obtinguts, així com el contingut del vector.
 */
int main(int argc, char** argv) {
    
    int i, n, suma, mediana;    // Index del vector, valor N, Suma de valores y mediana
    int vector[DIM];            // Vector donde se guardaran los valores
    
    srandom(time(0));
    
    printf("Generación aletoria de los %d valores del vector: ", DIM);
    
    for(i=0;i<DIM;i++)
        printf("El elemento %d vale %d.", i+1, vector[i]=random()%INT_MAX);
    

    return (EXIT_SUCCESS);
}

