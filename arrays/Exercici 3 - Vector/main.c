/* 
 * File:   main.c
 * Author: pdavila
 *
 * Created on 8 de enero de 2014, 10:21
 */

#include <stdio.h>
#include <stdlib.h>
#define DIM 10

/*
 * Exercici 3 - Vector
 * 
 * Feu un programa que: 
 * a) Creï un vector de 10 elements de tipus enter i el carregui amb les dades que entri l'usuari.
 * b) Mostri en pantalla cada element del vector junt amb el seu quadrat i el seu cub.
 */

int main(int argc, char** argv) {
    
    // Declaro el vector y el index
    int vector[DIM], i;
    
    // Inicializo la variable "i" a "0" siendo menor que la dimensión y la incremento
    for (i=0;i<DIM;i++){
        // Muestro el texto para introducir valores
        printf("Introduce numero enteros: ");
        // Guardo los datos introducidos por el usuario
        scanf("%d", &vector[i]);
        
        // Muestro el resultado
        printf("\nHas intriducido el numero %d cuyo cuadrado es %d y su cubo es %d.\n\n", vector[i], vector[i]*vector[i], vector[i]*vector[i]*vector[i]);
    }
    
    return (EXIT_SUCCESS);
}

