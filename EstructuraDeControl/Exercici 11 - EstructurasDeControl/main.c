/* 
 * File:   main.c
 * Author: pdavila
 * Created on 27 de noviembre de 2013, 10:32
 */

#include <stdio.h>
#include <stdlib.h>

/* 
 * Exercici 11 - EstructurasDeControl
 * 
 * El diumenge de Pasqua és el primer diumenge després de la primera lluna plena 
 * posterior a l'equinocci de primavera, i es determina mitjançant el següent càlcul:
 * A = any % 19;
 * B = any % 4;
 * C = any % 7;
 * D = (19 * A + 24) % 30;
 * E = (2*B + 4*C + 6*D +5) % 7;
 * N = (22 + D + E);
 * 
 * On N indica el número de dia del mes de març (si N és igual o menor que 31) o 
 * abril (si és major que 31). Construïu un programa que determini dates de diumenges de Pasqua.
 * 
 */
int main(int argc, char** argv) {
    
    int any;
    int a,b,c,d,e,n;
    
    printf("Introduce un año: ");
    scanf("%d", &any);
    
    a = any % 19;
    b = any % 4;
    c = any % 7;
    d = (19 * a + 24) % 30;
    e = (2*b + 4*c + 6*d +5) % 7;
    n = (22 + d + e);
    
    printf("El Domingo de Pascua del año %d es: ", any); 
    
    if (n<=31) {
        printf("%d de Marzo ", n);
    } else 
        printf("%d de Abril ", n-31);

    return (EXIT_SUCCESS);
}

 