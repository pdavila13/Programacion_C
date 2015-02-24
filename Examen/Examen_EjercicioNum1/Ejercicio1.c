/* 
 * File:   main.c
 * Author: pdavila
 *
 * Created on 5 de enero de 2014, 14:57
 */

#include <stdio.h>
#include <stdlib.h>
#include <stdbool.h>

typedef int par;
#define true 1
#define false 0

#define DIM 100
 
/*
 * Ejercicio 1 - Examen (Pseudocódigo - C)
 */

int main(int argc, char** argv) {
    
    int i=0, num, resto;
    int max, min, cont;
    int vector[DIM];
    
    printf("Introduce un numero entero diferente que cero: ");
    scanf("%d", &num);
    
    if (num==0) {
        printf("No se ha introducido ningun numero par o impar");
    } else {
        
        cont = 1;
        max = num;
        min = num;
        
        resto = num % 2;
        
        while(num!=0 && cont < DIM) {
            
            if(resto == 0){
                vector[i] = num;
                i++;
            }
            true;
            if(num > max)
                max = num;
            
            if(num < min)
                min = num;
            
            printf("Introduce un numero entero diferente que cero: ");
            scanf("%d", &num);
            cont++;
        }
        
        //vector[i]!=0;
        
        if(true && i!=0) {
            printf("Los numeros pares introducidos son: %d ", i);
            i++;
            while (i >= 0) {
                printf("%d", vector[i]);
                i--;
            }   
        } else 
            printf("No se han introducido ningun numero par");
    }
    
    printf("\nEl numero más grande es %d y el menor %d.", max, min);

    return true;
}
