/* 
 * File:   main.c
 * Author: pdavila
 *
 * Created on 21 de marzo de 2014, 8:21
 */

#include <stdio.h>
#include <stdlib.h>

/*
 * Muestra si un numero es polidromo o no
 */

int num_inverso (int n);
double potencia (double base, int expo);
void numpalin(int p);

int main(int argc, char *argv[]) {
    
    int num;
    
    printf ("\nIntroduzca un nombre entero: ");
    scanf ("%d", &num);
    
    printf ("\nEl nombre introducido al reves es: %d",num_inverso(num));
    numpalin(num);
    
    return 0;
}

int num_inverso(int n) {
    
    int numero[10],j,k,i=0,invertido=0;
    
    while (n/10!=0) {
        numero[i]=n%10;
        i++;
        n=n/10;     
    }
    
    numero[i]=n%10;
    k=i;
    
    for (j=0;j<=i;j++) {
        invertido=invertido+numero[j]*potencia(10,k);
        k--;  
    }
    
    return invertido;
}

double potencia (double base, int expo) {
    int i;
    double pot=1; 
    
    for (i=0; i<expo; i++) pot = pot * base;
    
    return pot;
}

// Función que retorna si el numero es palindro o no
void numpalin(int p) {
    if (p==num_inverso(p)) 
        printf ("\nEl nombre introducido ES un palindromo");
    else 
        printf ("\nEl nombre introducido NO es un palindromo");
}

/*
void polidromo (int n) {
    return n==num_inverso(n);
}
*/