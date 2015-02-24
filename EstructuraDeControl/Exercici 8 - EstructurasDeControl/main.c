/* 
 * File:   main.c
 * Author: pdavila
 * Created on 27 de noviembre de 2013, 9:46
 */

#include <stdio.h>
#include <stdlib.h>

/* Exercici 8 - EstructurasDeControl
 * 
 * Escriviu un programa que simuli una calculadora simple. Llegeix dos enters i 
 * un caràcter. Si el caràcter és un +, s'imprimeix la suma; si és un -, s'imprimeix 
 * la diferència; si és un *, s'imprimeix el producte; si és un /, s'imprimeix el 
 * quocient; i si és un % s'imprimeix el residu.
 * 
 */

int main(int argc, char** argv) {
    
    int a, b, resultado;
    char operacion;
    
    printf("Introduce dos numeros enteros para hacer las operacions: ");
    scanf("%d %c %d", &a, &operacion, &b);
    
    switch (operacion) {
        case '+': 
            printf("La suma de %d y %d es %d",a , b, a+b);
            break;
        case '-':
            printf("La resta de %d y %d es %d",a , b, a-b);
            break;
        case '*':
            printf("El producto de %d y %d es %d",a , b, a*b);
            break;
        case '/':
            printf("La división de %d y %d es %d",a , b, a/b);
            break;
        case '%': 
            printf("El modulo de %d y %d es %d",a , b, a%b);
            break;
        default:
            printf("La operación introducida no es correcta.");
            break;   
    }

    return (EXIT_SUCCESS);
}

