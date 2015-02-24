/* 
 * File:   main.c
 * Author: pdavila
 *
 * Created on 17 de octubre de 2013, 23:02
 */

#include <stdio.h>
#include <stdlib.h>

/*
 * 
 */
int main(int argc, char** argv) {
    
    int suma=0, num=1;
    
    while (num <= 33){
        suma = suma + num * 3;
        num = num + 3;
    }
    
    printf("La suma val %d", suma);

    return (EXIT_SUCCESS);
}

