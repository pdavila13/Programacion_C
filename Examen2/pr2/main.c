/* 
 * File:   main.c
 * Author: pdavila
 *
 * Created on 5 de febrero de 2014, 9:21
 */

#include <stdio.h>
#include <stdlib.h>
#include <termios.h>
#include <unistd.h>
#include <wchar.h>
#include <wctype.h>

int mygetchar(void);

int main(int argc, char** argv) {
    
    int lletres[95]={0};
    int car,i;
    printf("Por favor, introduzca un texto (máximo 95 caracteres): ");
    
    while((car=mygetchar())!='.')
        lletres[car-32]=lletres[car-32]+1;
    
    lletres['.'-32]=1;
    for(i=0;i<95;i++)
        if(lletres[i]!=0)
            printf("\nLetra en ASCII: %d \nNº veces encontradas en el texto: %d\n",i+32, lletres[i]);
    return (EXIT_SUCCESS);
}

int mygetchar(void) {
    struct termios oldt, newt;
    int ch;
    tcgetattr(STDIN_FILENO,&oldt);
    newt = oldt;
    newt.c_lflag &=~(ICANON | ECHO);
    ch = getchar();
    tcsetattr(STDIN_FILENO,TCSANOW,&oldt);
    printf("%c", ch);
    return ch;
}