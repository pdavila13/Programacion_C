/* 
 * File:   main.c
 * Author: pdavila
 *
 * Created on 5 de marzo de 2014, 9:15
 */

#include <stdio.h>
#include <stdlib.h>

typedef int encontrado;
#define true 1
#define false 0

/*
 * Feu una funció que reemplaci una subcadena per una altra. Les dues seran de la 
 * mateixa longitud. 
 */

void reemplazarSubcadena(char *str1, const char *busc, const char reemp);
int buscarSubcadena(char *str1, const char *busc);

//int strlen (char *str1);

int main(int argc, char** argv) {
    
    char c[]="123456";
    char s[]="345";
    
    printf("%d", buscarSubcadena(c,s));

    return (EXIT_SUCCESS);
}


int buscarSubcadena(char *str1, const char *busc) {
    
    // Retorna el index donde comienza busc a str1 o -1 si no la encuentra.
    int i,
        cont=0,
        pos=-1;
    
    int encont;
    
    encont=false;
    
    for(i=0;i<strlen(str1);i++) {
        if(str1[i] == busc[cont]) {
            cont++;
            if(!encont) {
                pos=i;
                //encont=true;
            }
        }
    } 
    return pos;
}

/*
int strlen (char *str1) {
	int  i;

	for(i=0;str1[i]!=0;i++);

	return i;
} 
*/

/*
void reemplazarSubcadena(char *str1, const char *busc, const char *reemp) {
    
    int i=0, j=0;
    
    while((i=buscarSubcadena(str1, busc, 1, i+j))!=-1) {
        i--;
        
        for(j=0;reemp[j]!=0;j++) {
            str1[i+j]=reemp[j];
        }    
    }
}
*/



/*
void reemplazarDistintaMedida(char *str1, const char *busc, const char *reemp) {
 int medida;
    int reemplazarMayor, reemplazarMenor;
    
    if(medida(busc) == medida(reemp)) {
        reemplazarDistintaMedida(str1, busc, reemp);
    } else {
        if(medida(busc)>medida(reemp)) {
            reemplazarMayor(str1, busc, reemp);
        } else
            reemplazarMenor(str1, busc, reemp);
    }
}
*/
    