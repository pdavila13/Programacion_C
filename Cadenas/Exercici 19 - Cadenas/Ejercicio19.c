/* 
 * File:   main.c
 * Author: pdavila
 *
 * Created on 26 de febrero de 2014, 10:18
 */

#include <stdio.h>
#include <stdlib.h>

/*
 * Exercici 19 - Cadenas
 * 
 * Feu una funció que insereixi una cadena dins d'una altra en una posició especificada
 */

void insertar (char *str1, char *str2);

void main() {
    
    char cadena[100]="Hola a todos";
    
    //insertar(cadena, 6, "buenos días");
    
    //printf("%s", cadena);

//    return (EXIT_SUCCESS);
}

/*
void insertar (char *str1, char *str2) {

	// 1) Encontrar el final de la cadena de str1.
	int i;
	for(i=0;str1[i]!=0;i++); 

	// 2) Agregar el contenido de str2, sobreescribiendo el 0 de str1.
	int j;
	for(j=0;str2[j]!=0;j++)
		str1[i++]=str2[j]; // str1[i]=str2[j]; i=i+1; // otra manera de hacerlo.

		// 3) Poner el 0 al final de str1, si hace falta.
		str1[i]=0;
}
*/

void insertar (char *str1, int pos, const char *str2) {
    char temp[strlen]
}

