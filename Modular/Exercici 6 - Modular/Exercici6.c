/* 
 * File:   main.c
 * Author: pdavila
 *
 * Created on 14 de febrero de 2014, 8:26
 */

#include <stdio.h>
#include <stdlib.h>

/*
Una companyia elèctrica factura els 200 primers Kw a 6 cèntims / Kw, els següents 300 a 3
cèntims / Kw i els restants a 1 cèntim / Kw. Escriviu una funció float carrec(int kw)
que rebi un consum de Kw i torni la corresponent quantitat a pagar. Escriviu una funció
principal que demani el consum de n clients i informi de la facturació de cada client, la
facturació total i la facturació mitjana.
*/

float carrec(float kw);

int main(int argc, char** argv) {
    
    int consumo;
    
    printf("Introduzca la cantidad en kw que quiere comprovar: ");
    scanf("%d", &consumo);
    
    printf("\nUsted ha consumido: %dkw", consumo);
    printf("\nFacturación total: %.2f€", carrec(consumo));
    printf("\nLa mediana de la facturación es: ");
    
    return (EXIT_SUCCESS);
}

float carrec(float kw) {
    
    float consu2, consu3;
    float precio=0;
    
    consu2 = kw - 200;
    
    if(consu2 > 0) {
        consu3 = consu2 - 300;
        if(consu3 > 0)
            precio = 200 * 0.06 + 300 * 0.03 + consu3 * 0.01;
        else precio = 200 * 0.06 + consu2 * 0.03;
    }
    else precio = kw * 0.06;
    
    return precio;

}

