/* 
 * File:   main.c
 * Author: pdavila
 *
 * Created on 21 de marzo de 2014, 8:21
 */

#include <stdio.h>
#include <stdlib.h>
#include <mates.h>

/*
 * Muestra si un numero es polidromo o no
 */

int main(int argc, char *argv[]) {
    
    int num;
    
    printf ("\nIntroduzca un nombre entero: ");
    scanf ("%d", &num);
    
    printf ("\nEl nombre introducido al reves es: %d", inverso(num));
    
    //printf ("\nEl nombre introducido al reves es: %d",inverso(num));
    
}
