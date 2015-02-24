/* 
 * File:   main.c
 * Author: pdavila
 *
 * Created on 21 de marzo de 2014, 9:10
 */

#include <stdio.h>
#include <stdlib.h>

/*
 * Conjetura de polidromo
 */

void num_inverso (int n);
double potencia (double base, int expo);
void num_palindromo (int p);

int main(int argc, char** argv) {
    
    int n;
    
    printf("Introduza un numero entero");
    scanf("%d", &n);
    
    while (!num_palindromo(n + num_inverso(n)));
        //n = n + num_inverso(n);
    
    printf("%d es palindromo!!", n + num_inverso(n));


    return (EXIT_SUCCESS);
}

void num_inverso(int n) {
    
    while (n/10!=0) {
        printf("%d",n%10);
        n=n/10;     
    }
    
    printf("%d",n%10);  
}

double potencia (double base, int expo) {
    int i;
    double pot=1; 
    
    for (i=0; i<expo; i++) pot = pot * base;
    
    return pot;
}

void num_palindromo(int p) {
    
    if (p == num_inverso(p)) {
        printf ("\nEl nombre introducido ES un palindromo");
    } else { 
        printf ("\nEl nombre introducido NO es un palindromo");
    }
}
