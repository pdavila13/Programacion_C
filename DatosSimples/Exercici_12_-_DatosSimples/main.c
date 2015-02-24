/* 
 * File:   main.c
 * Author: pdavila
 *
 * Created on 15 de noviembre de 2013, 9:15
 */

#include <stdio.h>
#include <stdlib.h>

/* Exercici 12 - TratamientoDeDatosSimples
Escriviu les següents expressions com expressions de computadora. La potència pot 
fer-se amb la funció pow(), per exemple (x+y)2==pow(x+y,2).
*/

int main(int argc, char** argv) {
    
    int a, b, c, d, m, n, x, y, z;
    
    (x/y)+1;                    // Ejercicio a

    (x+y)/(x-y);                // Ejercicio b
    
    (x+(y/z))/(x+(y/z));        // Ejercicio c
    
    b/(c+d);                    // Ejercicio d
    
    (a+b)*(c/d);                // Ejercicio e
        
    ((a*a+b*b))*((a*a+b*b));    // Ejercicio f
    
    (x*y)/(1-4*x);              // Ejercicio g
    
    (x*y)/(m*n);                // Ejercicio h
    
    ((x+y)*(x+y))*(a-b);        // Ejercicio i
    
    return (EXIT_SUCCESS);
}

