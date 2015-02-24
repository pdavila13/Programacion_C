/* 
 * File:   main.c
 * Author: pdavila
 *
 * Created on 7 de noviembre de 2014, 13:08
 */

#include <stdio.h>
#include <stdlib.h>
#include <stdio_ext.h>

/*
 * 
 */

int main(int argc, char** argv) {
    
    int base, altura;
    float area;
    
/*
    printf("Introdueix la base del triangle: ");
    scanf("%d", &base);
    
    printf("Introdueix l'altura del triangle: ");
    scanf("%d", &altura);
    
    area=(base*altura)/2;
    
    printf("\nL'àrea del triangle val: %.2f", area);
*/
        
    printf("Introdueix la base i l'altura del triangle: ");
    scanf("%d %d", &base, &altura);
    
    __fpurge(stdin);
    
    printf("\nL'àrea del triangle val: ", (float)base*altura/2);

    return (EXIT_SUCCESS);
}

