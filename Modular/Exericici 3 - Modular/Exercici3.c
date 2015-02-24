/* 
 * File:   main.c
 * Author: pdavila
 *
 * Created on 12 de febrero de 2014, 9:35
 */

#include <stdio.h>
#include <stdlib.h>

/*
Utilitzant la funció creada en l'apartat anterior, escriviu una funció que calculi el nombre
combinatori donat por la fórmula següent:
(n m) = n! / (m!(n − m)!) on ha de complir-se que n>m . 
*/

long factorial (long m);
int nombre_combinatori (int n, int m);

int main(int argc, char** argv) {
    
    int n, m;
    
    printf("Introduzca dos numero enteros n > m: \n");
    scanf("%d %d", &n, &m);
    
    printf("Resultado: %d", nombre_combinatori(n,m));

    return (EXIT_SUCCESS);
}

int nombre_combinatori (int a, int b) {
    
    return factorial(a) / (factorial(b) * factorial(a-b));
}

long factorial (long m) {
    
    int i;
    long fact = 1;
    
    for (i=1; i<=m; i++)
        fact = fact * i;
    
    return fact;
}

