/* 
 * File:   main.c
 * Author: pdavila
 *
 * Created on 4 de diciembre de 2013, 10:32
 */

#include <stdio.h>
#include <stdlib.h>

/*
 * Exercici 34 - EstructurasDeControl
 * 
 * Escriviu un programa que determini i escrigui la descomposició factorial d'un nombre positiu.
 * 
 * PASSOS:
 * 
 * 1) Demanar un numero enter més gran que 1. No continuar fins que introduixe un numero correcte.
 * 2) Dins d'un mentre intenten dividir el numero per 2*. Si divideix mostrem el 2 i assignem al numero 
 *    el quocient de la divisió.
 * 3) El mentre acabará quan el numero valgue 1.
 *    * Hem de buscar divisors començant per 2 i fins acabar al propi numero. 
 */
int main(int argc, char** argv) {
    
     //Declaración de variables
    int num, div;    
    
    //Pedimos al usuario un numero entero mayor que 1
    printf("Introduce un numero entero mayor que 1: ");
    scanf("%d", &num);
    //No paramos hasta que se introduzca
    while(num<=1){
            printf("Vuelve a introducir un numero, tiene que ser mayor que 1:\n");
            scanf("%d", &num); 
    }
    
    //Descomposición factorial. El primer posible divisor será el 2
    div=2;
    printf("%d = 1 ", num);
    while(num!=1){
        //Si hemos encontrado el divisor, lo mostramos y dividimos el numero por el divisor
        if(num%div==0) {
            printf("* %d ", div);
            num=num/div;
        }
        //Si no és divisor provamos con el siguiente entero
        else div++;                    
    }

    return (EXIT_SUCCESS);
}

