/* 
 * File:   main.c
 * Author: pdavila
 *
 * Created on 5 de febrero de 2014, 9:14
 */

#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#define DIM 10
#define DIM2 DIM*DIM

int main(int argc, char** argv) {
    
    int i,j;
    int valors[DIM][DIM];
    int f[DIM2];
    int c[DIM2];
    
    int compt=0;
    
    srandom(time(0));
    for(i=0;i<DIM;i++)
        for(j=0;j<DIM;j++)
            if((valors[i][j]=random()%10)==0) {
                f[compt]=i;
                c[compt++]=j;
            }
    for(i=0;i<compt;i++)
        printf("%2d\t%2d\n", f[i]+1,c[i]+1);

    return (EXIT_SUCCESS);
}

