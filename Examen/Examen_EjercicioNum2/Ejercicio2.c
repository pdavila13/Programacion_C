/* 
 * File:   main.c
 * Author: pdavila
 *
 * Created on 6 de febrero de 2014, 11:05
 */

#include <stdio.h>
#include <stdlib.h>
#define DIM 100

/*
 * Ejercicio 2 - Examen (Pseudocódigo - C)
 */
int main(int argc, char** argv) {
    
    int i, iPar, iImpar, num, resto;
    int sumPar, sumImpar, max, min;
    int vectorPar[DIM], vectorImpar[DIM];
    
    iPar=-1;
    iImpar=-1;
    sumPar=0;
    sumImpar=0;
    
    printf("Intruduzca un numero entero diferente que cero: ");
    scanf("%d", &num);
    
    // Entro en el bucle mientras el numero introducido sea diferente que cero
    while(num!=0 || iPar==-1 || iImpar==-1) {
        if(num==0) {
            printf("\nAún no puedes acabar.");
        } else {
            resto = num % 2; // guardo operación en resto
            if(resto == 0) { // si el resto es igual a cero guardamos y sumamos
                iPar++;
                vectorPar[iPar] = num;
                sumPar = sumPar + num;
                
                if(iPar==0)
                    max = num;
                 else 
                    if(num > max) 
                        max = num;
                 
            } else {
                    iImpar++;
                    vectorImpar[iImpar] = num;
                    sumImpar = sumImpar + num;
                    
                    if(iImpar == 0) 
                        min = num;
                      else 
                        if(num < min)
                            min = num;
                }
        }
        
        printf("\n\nIntruduzca un numero entero diferente que cero: ");
        scanf("%d", &num);
    }
    
    i=0;
    
    while (i <= iPar) {
        printf("\nLos numeros pares introducidos son: %d ", vectorPar[i]);
        
        i++;
    }
    
    i=0;
    
    while (i <= iImpar){
        printf("\nLos numeros impares introducidos son: %d ", vectorImpar[i]);
        i++;
    }
    
    printf("\nLa suma total de los numero introducidos vale: %d", sumPar+sumImpar);
    printf("\nLa suma de los numeros pares vale: %d", sumPar);
    printf("\nLa suma de los numero impares vale: %d", sumImpar);
    printf("\nEl numero par más grande es %d y el impar más pequeño es %d", max, min);
    
    return (EXIT_SUCCESS);
}

