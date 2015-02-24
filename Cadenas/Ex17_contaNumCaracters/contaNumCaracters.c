/* 
 * File:   main.c
 * Author: pdavila
 *
 * Created on 28 de enero de 2015, 9:56
 */

#include <stdio.h>
#include <stdlib.h>
#include <termios.h>
#include <unistd.h>

int mygetchar(void);

/*
 * Feu un programa que compti el nombre de vegades que apareix cada caràcter dins 
 * d'un text. No considereu accents ni els caràcters 'ç' i 'ñ'.
 */

int main(int argc, char** argv) {
    
    int contCaracters[126-32]={0};
    int i=0, car;
    
    printf("Introdueix un text acabat en PUNT: \n");
    
    //llegint dos caracters separats per espais o el que sigui.
    while((car=mygetchar())!='.'){
        contCaracters[car-32]++;
    }
    //indico que el . ha aparegut una vegada
    contCaracters[car-32]=1;
    
    printf("\n");
    
    //mostren quantes vegads ha aparegut cada caracter
    for(i=0;i<126-32+1;i++){
        if (contCaracters[i]!=0) {
            printf("\nEl caracter %c ha aparegut %d vegades.\n", i+32, contCaracters[i]);
        }
    }

    return (EXIT_SUCCESS);
}

int mygetchar(void) {
    struct termios oldt, newt;
    int ch;
    tcgetattr( STDIN_FILENO, &oldt );
    newt = oldt;
    newt.c_lflag &= ~( ICANON | ECHO );
    tcsetattr( STDIN_FILENO, TCSANOW, &newt );
    ch = getchar();
    tcsetattr( STDIN_FILENO, TCSANOW, &oldt );
    
    printf("%c",ch);
    
    return ch;
}

/*
#include <stdio.h>
#include <stdlib.h>
#include <termios.h>
#include <unistd.h>

#define LONG 200

int mygetchar(void);

int main(int argc, char** argv) {
    
    int contCaracters[126-32+1]={0};
    int i=0, car;
   
    printf("\nIntroduix el text acabat en PUNT:\n");
    while((car=mygetchar())!='.'){
        contCaracters[car-32]++;        
    }
    //Indico que le . ha aparegut una vegada
    contCaracters[car-32]=1;
    
    printf("\n\n");
    
    
    //Anem a mostrar quantes vegades ha aparegut cada caracter
    for(i=0;i<126-32+1;i++)
        if(contCaracters[i]!=0){
            printf("El caracter %c ha aparegut %d vegad", i+32, contCaracters[i]);
            if(contCaracters[i]==1) printf("a.\n");
            else printf("es.\n");
        }
    
    return (EXIT_SUCCESS);
    
}

int mygetchar(void)
{
struct termios oldt, newt;
int ch;
tcgetattr( STDIN_FILENO, &oldt );
newt = oldt;
newt.c_lflag &= ~( ICANON | ECHO );
tcsetattr( STDIN_FILENO, TCSANOW, &newt );
ch = getchar();
tcsetattr( STDIN_FILENO, TCSANOW, &oldt );
printf("%c",ch);
return ch;
}


#include <stdio.h>
#include <stdlib.h>
#include <termios.h>
#include <unistd.h>

#define LONG 100

int mygetchar(void);

int main(int argc, char** argv) {
char text[LONG];
int car,i=0;
printf("Introdueix línies de text:\n");
printf("Per a finalitzar introdueix un punt\n\n");
// Llegeix caracters fins apretar el .
while(i<LONG-1 && (car=mygetchar())!='.')
{
//Operacions amb la línia de text llegida
text[i]=car;
i++;
}
text[i]=0;
printf("\nLa cadena és:\n %s\n", text);
printf("La longitud de la cadena és %d\n", i);

return (EXIT_SUCCESS);
}

int mygetchar(void)
{
struct termios oldt, newt;
int ch;
tcgetattr( STDIN_FILENO, &oldt );
newt = oldt;
newt.c_lflag &= ~( ICANON | ECHO );
tcsetattr( STDIN_FILENO, TCSANOW, &newt );
ch = getchar();
tcsetattr( STDIN_FILENO, TCSANOW, &oldt );
printf("%c",ch);
return ch;
}
*/