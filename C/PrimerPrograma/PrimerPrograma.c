/* 
 * File:   main.c
 * Author: pdavila
 *
 * Created on 5 de noviembre de 2014, 10:40
 */

#include <stdio.h>
#include <stdlib.h>
#include <stdio_ext.h>

/*
 * 
 */

int main(int argc, char** argv) {
    
    int a;
    float b;
    
    printf("Introdueix un valor enter: ");
    scanf("%d", &a);
    
    printf("Introdueix un valor real: ");
    scanf("%f", &b);
    
    //scanf("%d", &b);
    __fpurge(stdin);
    
    printf("\n");
    printf("Enter: %d \nReal: %.2f", a, b); //%.1f numero de decimals a mostrar

    return (EXIT_SUCCESS);
}


/*
    int a;
    float b;
    
    printf("Introdueix un valor enter i un valor real:\n");
    scanf("%d %f", &a, &b);
    //scanf("%d", &b);
    __fpurge(stdin);
    
    printf("\n");
    printf("Enter: %d \nReal: %.1f", a, b); //%.1f numero de decimals a mostrar
*/


/*
    int i = 1001;
    float x = 543.456;
    char a = 'A';
    char c[11] = "1234567890";
    
    printf ("i = %d, x = %f, a = %c, c = %s\n", i, x, a, c);
    printf ("i = %3d, x = %3f, a = %3c, c = %3s\n", i, x, a, c);
    printf ("i = %15d, x = %15f, a = %15c, c = %15s\n", i, x, a, c);
    printf ("i = %.2d, x = %.2f, a = %.2c, c = %.2s\n", i, x, a, c);
    printf ("i = %.12d, x = %.12f, a = %.12c, c = %.12s\n", i, x, a, c);
    printf ("i = %-5d, x = %-5f, a = %-5c, c = %-5s\n", i, x, a, c);
    printf ("i = %-12d, x = %-12f, a = %-12c, c = %-12s\n", i, x, a, c);
    printf ("i = %12.2d, x = %12.2f, a = %12.2c, c = %12.2s\n", i, x, a, c);
*/
