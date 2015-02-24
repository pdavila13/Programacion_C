/* 
 * File:   main.c
 * Author: pdavila
 *
 * Created on 12 de febrero de 2014, 10:07
 */

#include <stdio.h>
#include <stdlib.h>

/*
 * El següent programa calcula la potència n-èssima x n d'un nombre enter x .
 */
double potencia(double x, int n);

int main(int argc, char** argv) {
    
    int n;
    double x;
    
    printf ("\nIntroduzca la base y el exponente: \n");
    scanf ("%lf %d", &x, &n);

    printf ("\nResultado: %lf", potencia(x,n));

    return (EXIT_SUCCESS);
}

double potencia(double x, int n) {
    
    int i;
    double potencia = 1;
    
    for (i=0; i<n; i++)
        potencia = potencia * x;
    
    return potencia; 
}

