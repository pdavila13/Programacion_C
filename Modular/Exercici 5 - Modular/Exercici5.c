/* 
 * File:   main.c
 * Author: pdavila
 *
 * Created on 12 de febrero de 2014, 10:43
 */

#include <stdio.h>
#include <stdlib.h>

/*
 * 
 */
double elevar_e(int x);
long factorial (long m);
double potencia(double x, int n);

int main(int argc, char** argv) {
    
    int i;
    
    printf("Calculo de la potencia de e \n");
    
    for(i=0;i<=10;i++);
    
    printf("el numero elavado a %d vale %lf", i, elevar_e(i));
    //scanf("%d", &x);
    
    //printf("Resultado: %d", elevarse(x));

    return (EXIT_SUCCESS);
}

double elevar_e(int x) {
    
    int i,suma;
    double elevado=1.0;
    
    for(i=0;i<=10;i++) {
        elevado = elevado + potencia((double)x,i) /factorial(i);
    }
    
    return elevado;
}

long factorial (long m) {
    
    int i;
    long fact = 1;
    
    for (i=1; i<=m; i++)
        fact = fact * i;
    
    return fact;
}

double potencia(double x, int n) {
    
    int i;
    double potencia = 1;
    
    for (i=0; i<n; i++)
        potencia = potencia * x;
    
    return potencia; 
}