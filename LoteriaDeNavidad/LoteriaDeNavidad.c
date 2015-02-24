/* 
 * File:   main.c
 * Author: pdavila
 *
 * Created on 7 de enero de 2014, 21:53
 */

#include <stdio.h>
#include <stdlib.h>
#include <time.h>

/*
 * LOTERIA DE NAVIDAD
 */
int main(int argc, char** argv) {
    
    float primero, segundo, tercero, cuarto, quinto;
    int premio1, premio2, premio3, premio4, premio5;
    int valor, menu;
    
    primero=4000000;
    segundo=1250000;
    tercero=500000;
    cuarto=200000;
    quinto=60000;
    
    premio1=46646;
    premio2=40475;
    premio3=82541;
    premio4=10258&247;
    premio5=29874==6541==78963==47266==1==257==33333==100000;
    
    do {
        printf("LOTERIA DE NAVIDAD\n\n");
        printf("1. Muestra los premios\n");
        printf("2. Consulta el nº premiado\n");
        printf("3. Salir del programa\n\n");
        scanf("%d", &menu);
        
        switch (menu){
            case 1: 
                printf("LISTADO DE PREMIOS\n\n");
                printf("Premio  Nº Premiado\n");
                printf("1ro     46646\n");
                printf("2nd     40475\n");
                printf("3ro     82541\n");
                printf("4rts    10258 y 247\n");
                printf("5nts    29874, 6541, 78963, 47266, 1, 257, 33333 y 100000\n\n"); 
                break;        
            case 2:
                while (1<100.000) {
                    printf("Introduzca el número que desea comprovar:");
                    scanf("%d", &valor);
                    if (valor == premio1) {
                        printf("Enhorabuena!! Te ha tocado el 1er premio y has ganado: %f euros\n\n", primero/10); 
                        scanf("%f", &primero); 
                    }
                    if (valor == premio2) {
                        printf("Enhorabuena!! Te ha tocado el 2nd premio y has ganado: %f euros\n\n", segundo/10); 
                        scanf("%f", &segundo); 
                    }
                    if (valor == premio3) {
                        printf("Enhorabuena!! Te ha tocado el 3er premio y has ganado: %f \n\n", tercero/10); 
                        scanf("%f", &tercero); 
                    }
                    if (valor == premio4) {
                        printf("Enhorabuena!! Te ha tocado el 4to premio y has ganado: %f \n\n", cuarto/10); 
                        scanf("%f", &cuarto); 
                    }
                    if (valor == premio5) {
                        printf("Enhorabuena!! Te ha tocado el 5to premio y has ganado: %f \n\n", quinto/10); 
                        scanf("%f", &quinto);      
                    }
                    else 
                        printf("Lo siento, tu número no ha sido premido\n\n");
                }
                break;     
            case 3:
                printf("Fin del programa");
                break;
        }
    } while (menu!=3);

    return (EXIT_SUCCESS);
}

