/* 
 * File:   main.c
 * Author: pdavila
 *
 * Created on 6 de febrero de 2014, 23:00
 */

#include <stdio.h>
#include <stdlib.h>

typedef int primo;
#define true 1
#define false 0

/*
 * Ejercicio 3 - Examen (Pseudocódigo - C)
 */

int main(int argc, char** argv) {
    
    int num, div, copia;
    int resultado, resto;

    printf("Introduzca un numero entero mayor que 1: ");
    scanf("%d", &num);
    
    false;
    
    while (false) {
        printf("Introduzca un numero entero mayor que 1: ");
        scanf("%d", &num);
        
        if(num <= 1) { // Vuelve a introducir un numero
            printf("\nEl numero ha de ser mayor que 1.");
        } else {
            if (num == 2) { // Mostramos que es primo
                printf("\nEl numero es primo y acabamos.");
                true;
            } else {
                
                div = num -1;
                resto = num % div; // Guardar el resto de la operación
                
                while (div >= 2 && resto == 0) { 
                    div = div - 1;
                }
                
                if (div == 1) {
                    true;
                    printf("\nEl numero es primo.");
                } else 
                    printf("\nEl numero no es primo y continua.");
            }
        }
        
        div = 2;
        copia = num;
        
        printf(" %d = 1", num);
        
        resultado = copia % div;
        
        while (copia!=1) { // si el numero es diferente que 1 imprimimos
            if(resultado == 0){
                printf(" * %d ", div);
                copia = copia / div;
            } else //Si la divsión no es entera se aumentará el residuo
                div++;
        }
        
        if(num == div) { // si el numero es igual que div es primo
            true;
            printf("\nEl numero es primo y acaba.");
        } else
            printf("\nEl numero no es primo y continua.");
    }


    return (EXIT_SUCCESS);
}
