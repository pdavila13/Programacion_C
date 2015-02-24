/* 
 * File:   main.c
 * Author: pdavila
 *
 * Created on 19 de febrero de 2014, 10:19
 */

#include <stdio.h>
#include <stdlib.h>

/*
Realitzeu una funció que rebi com a paràmetres tres nombres reals i els torni ordenats contenint
el primer paràmetre el major dels tres nombres, el segon el valor entremig, i el tercer el menor.
Escriviu una funció principal que permeti provar-la.
*/

void ordenar(double *num1, double *num2, double *num3);

int main(int argc, char** argv) {
    
    double num1, num2, num3;

    printf("Introduzca tres nombres reales: \n");
    scanf("%lf %lf %lf", &num1, &num2, &num3);
    
    ordenar(&num1, &num2, &num3);

    printf("Numero ordenados %lf < %lf < %lf", num1, num2, num3); 
    return (EXIT_SUCCESS);
}

void ordenar(double *num1, double *num2, double *num3) {
    if (*num3 > *num2 && *num3 > *num1) {
        *num3 = *num2;
    } else {
            if(*num2 > *num1 && *num2 > *num3) {
                *num2 = *num1;
                //*nombre2 = *nombre3;
            } else {
                if(*num1 > *num2 && *num1 > *num3)
                    *num1 = *num3;
            }
        }
}