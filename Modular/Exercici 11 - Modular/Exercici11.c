/* 
 * File:   main.c
 * Author: pdavila
 *
 * Created on 7 de marzo de 2014, 8:33
 */

#include <stdio.h>
#include <stdlib.h>

/*
 * Muestra el inverso de un numero entero positivo o negativo
 */

void num_inverso(int n);
int num_cifras(int n);
double potencia (double base, int expo);

int main(int argc, char *argv[]) {
    
    int num;
    
    printf ("\nIntroduzca un nombre entero: ");
    scanf ("%d", &num);
    
    printf ("\nEl nombre introducido al reves es: ");
    num_inverso(num);
    
    return 0;
}

/*
void num_inverso(int n) {
    
    while (n/10!=0) {
        printf("%d",n%10);
        n=n/10;     
    }
    
    printf("%d",n%10);   
}
*/

void inverso (int n) {
    
    int elevar = num_cifras(n) - 1;                                             //      n    |   elevar   |    suma
                                                                                //     ______|____________|__________
                                                                                //     123   |     2      |      0
    int suma = 0;                                                               //      12   |     1      |     300
                                                                                //      1    |     0      |     320
    while (n/10!=0) {           //  También puede ser (elevar>=0)               //      0    |    -1      |     321 
        suma = suma + (n % 10)*potencia(10,elevar);
        elevar = elevar - 1;                            // n--;
        n = n / 10;
    }
    
    return suma;

}

int num_cifras(int n) {
    
    int cont=1;
    
    while (n/10!=0) {
        cont++;   
        n=n/10;
    }
    return cont;
}

double potencia (double base, int expo) {
    int i;
    double pot=1; 
    
    for (i=0; i<expo; i++) pot = pot * base;
    
    return pot;
}