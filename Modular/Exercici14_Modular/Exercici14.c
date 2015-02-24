/* 
 * File:   main.c
 * Author: pdavila
 *
 * Created on 28 de marzo de 2014, 9:01
 */

#include <stdio.h>
#include <stdlib.h>

/*
 * 
 */

int num_primo (int n);

int main(int argc, char** argv) {
    
    int num;
    
    printf("Introduzaca un numero: ");
    scanf("%d", &num);
    
    num_primo(num);
    
    return (EXIT_SUCCESS);
}

// Funció que retorna 1 si n es primer, sino 0 
int num_primo (int n) {
    
    int x;
    // for (x=n-1;x>=1&n%x!=0;x--)
    for (x=n-1;n%x!=0;x--);
        if (x <= 1) 
            return 1;
        else
            return 0;
}    
    
/*
    if (n%2==0) {
        printf("El numero es primo");
        //return 1;
        
    } else
        printf("El numero no es primo");
        //return 0;


    //return n;
*/

