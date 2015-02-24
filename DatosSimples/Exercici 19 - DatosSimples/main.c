/* 
 * File:   main.c
 * Author: pdavila
 *
 * Created on 15 de noviembre de 2013, 9:39
 */

#include <stdio.h>
#include <stdlib.h>

/* Exercici 19 - DadosSimples
Escriviu un programa que llegeixi un enter, el multipliqui per 2 i a continuació escrigui el
resultat per pantalla.
 */
int main(int argc, char** argv) {
    
    int valor;
    
    printf ("Introduce un valor entero: ");
    scanf ("%d", &valor);
    
    valor = valor * 2;
    
    printf("\nEl resultado de la multiplicación es %d: ", valor);
    
    return (EXIT_SUCCESS);
}

