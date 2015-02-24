/* 
 * File:   main.c
 * Author: pdavila
 *
 * Created on 26 de febrero de 2014, 10:12
 */

#include <stdio.h>
#include <stdlib.h>

/*
 * 
 */

/*
int main(int argc, char** argv) {

    return (EXIT_SUCCESS);
}
*/

// 1) Encontrar el final de la cadena de str1.
// 2) Agregar el contenido de str2, sobreescribiendo el 0 de str1.
// 3) Poner el 0 al final de str1, si hace falta.
void strcat (char *str1, char *str2);

void main() {

	char cadena[100] = "hola";
        
	strcat(str1, "mundo");

	printf(str1);

}

void strcat (char *str1, char *str2) {

	// 1) Encontrar el final de la cadena de str1.
	int i=0;
	for( ;*str1[i]!=0;i++); 

	// 2) Agregar el contenido de str2, sobreescribiendo el 0 de str1.

	int j;
	for(j=0;str2[j]!=0;j++) str1.
		str1[i++]=str2[j];
		// str1[i]=str2[j]; otra manera de hacerlo.
		// i=i+1;

		// 3) Poner el 0 al final de str1, si hace falta.
		str1[i]=0;

		return i;
}