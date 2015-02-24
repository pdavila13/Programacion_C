/* 
 * File:   main.c
 * Author: pdavila
 *
 * Created on 7 de marzo de 2014, 8:31
 */

#include <stdio.h>
#include <stdlib.h>

/*
 * Muestra cuantas cifras tiene un numero entero
 */

int num_cifras(int n);

int main(int argc, char *argv[]) {
    
    int num, i;
    
    printf ("\nIntroduzca un nombre entero: ");
    scanf ("%d", &num);
    
    printf("\nEl numero de cifras es %d\n", num_cifras(num));
    
    return 0;
}

int num_cifras(int n) {
    
    int cont=1;
    
    while (n/10!=0) {
        cont++;   
        n=n/10;
    }
    return cont;
}