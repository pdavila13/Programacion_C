/* 
 * File:   main.c
 * Author: pdavila
 *
 * Created on 7 de octubre de 2013, 10:58
 */

#include <stdio.h>
#include <stdlib.h>

/*
 * 
 */
int main(int argc, char** argv) {
    
    float b,h;
    float area;
    
    printf ("Introdueix la base del triangle: ");
    scanf ("%f", &b);
    
    printf ("Introdueix l'altura del triangle: ");
    scanf ("%f",&h);
    
    area = (b * h) / 2;
    
    printf ("L'area del triangle es: %f", area);

    return (EXIT_SUCCESS);
}

