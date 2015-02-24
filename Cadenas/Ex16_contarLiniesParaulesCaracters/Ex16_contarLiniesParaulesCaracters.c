/* 
 * File:   main.c
 * Author: pdavila
 *
 * Created on 28 de enero de 2015, 9:17
 */

#include <stdio.h>
#include <stdlib.h>
#include <termios.h>
#include <unistd.h>

#define LONG 200

int mygetchar(void);

/*
 * Realitzeu un programa que calculi el nombre de línies, paraules i caràcters d'un text introduït per teclat.
 */

int main(int argc, char** argv) {
    
    char cadena[LONG];
    int i=0,car;
    int blanc=1,cont=0,contLinies=1,contBlancs=0;
    
    printf("\nIntrodueix el text acabar en PUNT: \n");
    
    while (i<LONG-1 && (car=mygetchar()) != '.') {
        
        //si introdueixen un salt de linia incremento el comptador de linies
        if (car=='\n') contLinies++;
        
        //si introdueixen un espai de linia incremento el comptador d'espais en blanc
        if (car==' ') contBlancs++;
        
        //controlar el numero de paraules
        if(blanc){
            if(car != ' ') {
                cont++;
                blanc=0;
            }
        } else {
            if (car == ' ' || car == '\n') {
                blanc=1;

            }

        }
        
        cadena[i]=car;
        i++;
    }
    
    cadena[i]=0;
    
    //printf("\nText introduït: \n\n%s \nconte %d paraules, %d linies i %d caracters.", cadena, cont, contLinies, i-contLinies-contBlancs+2);
    printf("\n\nText introduït: \n\n%s \n", cadena);
    printf("\nNº paraules: %d", cont);
    printf("\nNº linies: %d", contLinies);
    printf("\nNº caracters: %d", i-contLinies-contBlancs+2);
    
    printf("\n");
    
    
    return (EXIT_SUCCESS);
}

int mygetchar(void) {
    struct termios oldt, newt;
    int ch;
    tcgetattr( STDIN_FILENO, &oldt );
    newt = oldt;
    newt.c_lflag &= ~( ICANON | ECHO );
    tcsetattr( STDIN_FILENO, TCSANOW, &newt );
    ch = getchar();
    tcsetattr( STDIN_FILENO, TCSANOW, &oldt );
    
    printf("%c",ch);
    
    return ch;
}

