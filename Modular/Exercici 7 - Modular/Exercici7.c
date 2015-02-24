/* 
 * File:   main.c
 * Author: pdavila
 *
 * Created on 7 de marzo de 2014, 8:26
 */

#include <stdio.h>
#include <stdlib.h>

/*
 * 
 */
void piramide (int nivells);

int main(int argc, char *argv[]) {
    int num, i;   
    
    printf ("\nIntrodueix el nombre de files de la piramide: ");
    scanf ("%d", &num);

    for (i=1;i<=num;i++) {
        piramide(i);
        printf("\n");
    }
    
    printf("\n");
    //system("PAUSE");
    return 0;
}

void piramide (int nivells) {
    int j,k;
    
    for (j=1;j<=nivells;j++) {
        printf("%d",j);
        k=j;
        if (k==nivells)
            while (k>1) {
                k--;
                printf("%d",k);
            }
    }
}