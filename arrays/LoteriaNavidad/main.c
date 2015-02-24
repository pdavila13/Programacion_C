/* 
 * File:   main.c
 * Author: pdavila
 *
 * Created on 13 de enero de 2014, 11:50
 */

#include <stdio.h>
#include <stdlib.h>
#define numeros 10000
/*
 * 
 */

int main(int argc, char** argv) {
    
    int i, contador;
    int premio[numeros];
    
    for (i=0;i<1000;i++) {
        premio[i]=0;
    }
    
    premio[2254] = 4000000;
    premio[2569] = 45856;
    premio[1586] = 5000;
    

    return (EXIT_SUCCESS);
}

