/* 
 * File:   main.c
 * Author: pdavila
 *
 * Created on 28 de enero de 2015, 9:15
 */

#include <stdio.h>
#include <stdlib.h>
#include <termios.h>
#include <unistd.h>

#define LONG 200

int mygetchar(void);
/*
 * 
 */
int main(int argc, char** argv) {
    
    char cadena[LONG];
    int i=0, car, dif='a'-'A';
   
    printf("\nIntroduix el text acabat en INTRO:\n");
    while(i<LONG-1 && (car=mygetchar())!='\n'){
        cadena[i]=car;
        i++;
    }
    cadena[i]=0;
    printf("\n\nEl text %s al reves és\n", cadena);
    i--;
    while(i>=0){
        if(cadena[i]>='A' && cadena[i]<='Z') cadena[i]=cadena[i]+dif;
        else
            if(cadena[i]>='a' && cadena[i]<='z') cadena[i]=cadena[i]-dif;
        printf("%c", cadena[i--]);
    }
    
    printf("\n\n");
    
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

/*############################################################################*/

// Exemple de com mostrar una frase acabada en INTRO al revés canviant majúscules 
// per minúscules i viceversa (exercici 7 ampliat)

/*
#include <stdio.h>
#include <stdlib.h>
#include <termios.h>
#include <unistd.h>

#define LONG 200

int mygetchar(void);

int main(int argc, char** argv) {
    
    char cadena[LONG];
    int i=0, car, dif='a'-'A';
   
    printf("\nIntroduix el text acabat en INTRO:\n");
    while(i<LONG-1 && (car=mygetchar())!='\n'){
        cadena[i]=car;
        i++;
    }
    cadena[i]=0;
    printf("\n\nEl text %s al reves és\n", cadena);
    i--;
    while(i>=0){
        if(cadena[i]>='A' && cadena[i]<='Z') cadena[i]=cadena[i]+dif;
        else
            if(cadena[i]>='a' && cadena[i]<='z') cadena[i]=cadena[i]-dif;
        printf("%c", cadena[i--]);
    }
    
    printf("\n\n");
    
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

/*
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