/* 
 * File:   main.c
 * Author: pdavila
 *
 * Created on 12 de noviembre de 2014, 11:46
 */

#include <stdio.h>
#include <stdlib.h>

/*
 * Escriu un programa que llegeixi dos enters dintre de dues variables, intercanviï
 * els valors de les dues variables mitjançant sentències d'assignació, i a continuació
 * mostri el resultat.
 */

int main(int argc, char** argv) {
    
    int a, b, temp;
    
    printf("Introdueix dos enters: \n");
    scanf("%d %d", &a, &b);

    temp = a;
    a = b;
    b = temp;
    
    printf("Els valors intercanviats són: %d %d", a, b);

    return (EXIT_SUCCESS);
}

