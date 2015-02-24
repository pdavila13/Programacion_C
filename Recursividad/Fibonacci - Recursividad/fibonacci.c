/* 
 * File:   main.c
 * Author: pdavila
 *
 * Created on 2 de abril de 2014, 10:31
 */

#include <stdio.h>
#include <stdlib.h>

/*
 * 
 */

int fibonacci (int n) ;

int main(int argc, char** argv) {
    
    int num;

	for (num=1;num<=10;num++)
		printf("%2d ", fibonacci(num));

	return 0;

    return (EXIT_SUCCESS);
}

//Funcion que calcule el termino n-enesimo de la succesion de Fibonaci
int fibonacci (int n) {
    if (n == 2) 
        return 1;
    else 
        if (n == 1)
            return 1;
        else
            if (n == 0)
                return 0;
            else
                if (n > 2)
                    return fibonacci(n-1)+fibonacci(n-2);
}
