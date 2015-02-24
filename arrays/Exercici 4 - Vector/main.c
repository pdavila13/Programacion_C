/* 
 * File:   main.c
 * Author: pdavila
 *
 * Created on 8 de enero de 2014, 10:48
 */

#include <stdio.h>
#include <stdlib.h>
#include <time.h>

/*
 * Exercici 4 - Vector
 * 
 * Es vol implementar un programa que simuli el llançament d'un dau 100 vegades. El programa
 * ha de comptar quantes vegades ha sortit cada número del dau. Per a realitzar la simulació heu
 * de generar una seqüència de números aleatoris mitjançant la funció random(). A més, al
 * començament del programa s'ha d'inicialitzar aquesta seqüència cridant a la funció
 * randomize().
 */
int main(int argc, char** argv) {
    
    int i;                      // Index del vector
    int dado[] = {0,0,0,0,0,0}; // Defino el vector de 6 elementos (numero cara de dados)
    
    srandom(time(0));           // Inicializo los numeros aletorios
    
    // Pruevo de tirar el dado 100 veces
    
    for(i=0;i<100;i++)
        dado[random()%6]++;     // Cada ves que tiro el dado incremento cada cara en uno
    
    for (i = 0; i < 6; i++)
        printf("La cara %d ha salido %d veces\n", i+1, dado[i]); //mostrem l'índex més 1 (i+1) per a que mostre de la cara 1 a la 6, enlloc de 0 a 5 (més realiste)

    return (EXIT_SUCCESS);
}

