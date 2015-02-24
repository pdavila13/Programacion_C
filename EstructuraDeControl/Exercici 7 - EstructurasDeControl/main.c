/* 
 * File:   main.c
 * Author: pdavila
 * Created on 27 de noviembre de 2013, 9:18
 */

#include <stdio.h>
#include <stdlib.h>

/* Exercici 7 - EstructurasDeControl
 * 
 * Escriviu un programa que demani el número d'un mes (1 a 12) i visualitzi el 
 * nombre de dies del mes (sense considerar si és bixest).
 * 
 */

int main(int argc, char** argv) {
    
    int mes;
    
    printf("Introduce el numero del mes que quieres visualizar: ");
    scanf("%d", &mes);
    
    if (mes<1 || mes>12) {
        printf("Error el numero del mes introducido no es correcto.");
    } else
        // Sabemos que los meses estan entre 1 - 12
        switch (mes) {
            printf("El mes tiene ");
        // El mes frebrero tiene 28 dias.
        case 2: 
            printf("28");
            break;
        // Los meses (Abril, Junio, Septiembre y Noviembre) tienen 30 dias
        case 4:
        case 6: 
        case 9: 
        case 11:
            printf("30");
            break;  
        // Los meses restantes tienen 31 días
        default: 
            printf("31");
            break;
    }
        printf(" días\n");
                                  
    return (EXIT_SUCCESS);
}

