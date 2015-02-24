/* 
 * File:   main.c
 * Author: pdavila
 *
 * Created on 7 de febrero de 2014, 9:49
 */

#include <stdio.h>
#include <stdlib.h>

/*
 * Programa que calcula el factorial d'un nombre
 */

long factorial (long m);

int main(int argc, char** argv) {
    
    int n;
    //long factorial;
    
    printf ("\nIntrodueix un nombre entero positivo: ");
    scanf ("%d", &n);
    
    printf ("\nEl factorial de %d és: %ld", n, factorial(n));

    return (EXIT_SUCCESS);
}

long factorial (long m) {
    
    int i;
    long fact = 1;
    
    for (i=1; i<=m; i++)
        fact = fact * i;
    
    return fact;
}
