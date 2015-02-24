/* 
 * File:   main.c
 * Author: pdavila
 *
 * Created on 2 de abril de 2014, 9:41
 */

#include <stdio.h>
#include <stdlib.h>

/*
 * 
 */

int num_primo (int n);
int siguientePrimo (int n);

void main(int argc, char** argv) {
    
    int cont;
    int p=1;
    
    printf("Cuantos numeros primos quieres calcular? ");
    scanf("%d", &cont);
    
    while (cont != 0) {
        
        /*
        //utilizamos la funcion num_primo
        if (num_primo(p)) {
            printf("%d",p);
            cont--;
        }
        p++;
        */
        
        //utilizamos la funcion siguientePrimo
        while(cont!=0) {
            printf("%d", p);
            cont--;
            p=siguientePrimo(p);
        }
    }
    //return (EXIT_SUCCESS);
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

// Funció que retorna el siguiente numero primo mas grande que n, si n es primo
// sinó retornara 0
int siguientePrimo (int n) {
    if (!num_primo(n))
        return 0;
    else {              // n si es primo
        for ( ; !num_primo(n);++n);
        return n;
    }
}
