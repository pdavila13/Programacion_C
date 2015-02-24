/* 
 * File:   main.c
 * Author: pdavila
 *
 * Created on 18 de diciembre de 2013, 10:11
 */

#include <stdio.h>
#include <stdlib.h>

/*
 * Exercici 35 - EstructurasDeControl
 * 
 * Per trobar el màxim comú divisor (mcd) de dos nombres s'utilitza l'algorisme d'Euclides.
 * Donats dos enters a i b, es mira quin és major. Si el major és a, se substitueix aquest per a-b; si
 * el major és b, se substitueix aquest per b-a, i així successivament fins que a=b. Aleshores, a és
 * el mcd. Escriviu un programa que calculi el mcd de dos nombres.
 */
int main(int argc, char** argv) {
    
    int a, b, residuo=0;
    
    printf("Introduce dos numeros enteros: ");
    scanf("%d %d", &a, &b);
    
    while (b!=0) {
        residuo=a%b;
        a=b;
        b=residuo;
    }

    printf("El M.C.D = %d", a);

    return (EXIT_SUCCESS);

}

