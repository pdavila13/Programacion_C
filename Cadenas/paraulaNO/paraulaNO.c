/* 
 * File:   main.c
 * Author: pdavila
 * 
 * Created on 28 de enero de 2015, 10:39
 */

#include <stdio.h>
#include <stdlib.h>
#include <termios.h>
#include <unistd.h>

#define LONG 45

int mygetchar(void);

/*
 * 
 */

int main(int argc, char** argv) {
    
    //declarar una cadena o caracter
    char cadena[LONG];
    int i=0, car, trobada=0, paraula;
    
    printf("Introdueix un text acabat en PUNT: \n");
    
    //llegint dos caracters separats per espais o el que sigui.
    while(!trobada && i<LONG-1 && (car=mygetchar())!='.'){
        cadena[i]=car;
        if(cadena[i]==' ' || cadena[i]=='\n');
        if(cadena[i-1] == 'o' && cadena[i-2] == 'n' && (i-3<0 || (cadena[i-3] ==' ' || cadena[i-3] == '\n'))) trobada=1;
        
        i++;
    }
    cadena[i]=0;
    
    //miro si el text acabo en no
    
    
    if(trobada)
        printf("\nS'ha trobat la paraula.");
    else
        printf("\nNO s'ha trobat la paraula.");

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