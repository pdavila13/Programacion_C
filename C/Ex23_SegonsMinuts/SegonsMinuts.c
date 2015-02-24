/* 
 * File:   main.c
 * Author: pdavila
 *
 * Created on 12 de noviembre de 2014, 12:15
 */

#include <stdio.h>
#include <stdlib.h>

/*
 * 
 */
int main(int argc, char** argv) {
    
    int segons, minuts;
    
    printf("Introdueix els segons: ");
    scanf("%d", &segons);
    
    printf("Son %d minut i %d segon.", segons/60, segons%60);
    
    
    return (EXIT_SUCCESS);
}

