/* 
 * File:   main.c
 * Author: pdavila
 *
 * Created on 5 de febrero de 2014, 11:37
 */

#include <stdio.h>
#include <stdlib.h>
#define DIM 5

int main(int argc, char** argv) {
    
    int i=0;
    int max,min,cont=1;
    int num[DIM];
    int mayor[DIM];
    int menor[DIM];
    float mediana,suma=0;
    
    printf("Intruzca numeros enteros, para finalizar introduzca un '0': ");
    scanf("%d",&num[i]);
    
    while(i < DIM) {
        printf("Intruzca numeros enteros, para finalizar introduzca un '0': ");
        scanf("%d",&num[i]);
        suma = suma + num[i];
        i++;
        cont++;
    }
    
    mediana = suma / i;
    i=0;
    
    printf("\nCantidad de numeros introducidos: %d", cont);
    printf("\nLa mediana vale: %f", mediana);
    
    while (i >= mediana) {
        
        if (num[i] >= mediana)
            mayor[i] = num[i];
        printf("Los numero mas grandes son:%d ",mayor[i]);
        
        if (num[i] <= mediana)
            menor[i] = num[i];
        printf("Los numero menores grandes son:%d ",menor[i]);

    }
    
    while (num[i]<DIM) {
        if(num[i] > max)
            max = num[i];
        printf("El numero máximo introducido es: %d",max);
        
        if(num[i] < min)
            min = num[i];
        printf("El numero mínimo introducido es: %d",min);
    }

    return (EXIT_SUCCESS);
}
