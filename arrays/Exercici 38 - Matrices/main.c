/* 
 * File:   main.c
 * Author: pdavila
 *
 * Created on 17 de enero de 2014, 8:25
 */

#include <stdio.h>
#include <stdlib.h>

/*
 * Escriviu un programa que realitzi la següent operació:
 * 1. generarà un número aleatori de N xifres.
 * 2. llegirà des del teclat un número de N xifres diferents.
 * 3. compararà el número llegit amb el número generat per la màquina
 * 4. Mostrarà en la pantalla una seqüència que indicarà quines xifres del número llegit s'han
 * encertat i estan col·locades en el lloc correcte ( * ), quines xifres s'han encertat però no estan
 * col·locades en la seva posició correcta ( ? ) i les xifres que no es troben en el número ( 0 ).
 * 
 * El programa repetirà els passos 2 a 4 fins que el nombre de xifres en posició correcta sigui n .
 * Vegeu el següent exemple d'execució (per a N =4 i per al número generat 5234)
 * 
 * Encerta el número: 2754
 *      Comparació: ?0?*
 * Encerta el número: 5555
 *      Comparació: *???
 * Encerta el número: 2134
        Comparació: ?0**
 * Encerta el número: 5234
        Has encertat!!!
        Has necessitat 4 intents
 */

int main(int argc, char** argv) {
    int a,b,c,d,e,f,k,n=0;

int *mat;

FILE *magia;

while (n<3)

{

  printf("  Ingrese el orden del cuadrado (n): ");

  scanf("%i",&n);

  if (n<3)

   printf("  Error, El orden del cuadrado debe ser >=3\n\n");

}

mat=(int *)malloc(sizeof(int)*n*n);

if (mat)

{

  printf("\n  La suma de filas, columnas y diagonales principales es: %i\n\n",(n*((n*n)+1))/2);

  if (n%2!=0)                         // Cuadrado con n impar

  {

   b=1;

   for (a=3;a<n;a+=2)                 // Calculo pocision de numero 1

    b++;

   for (a=1;a<=n*n;a++)

   {

    if (a==1)

    {

     c=0;

     d=n-b-1;

     *(mat+d+(c*n))=1;

    }

    else

    {

     if ((a-1)%n==0)

      c++;                            // Si el ultimo numero puesto es multiplo del orden del cuadrado, pongo el numero abajo de este

     else

     { 

      c--;                            // Me muevo en diagonal /

      d++;

      if (d==n)

       d=0;

      if (c<0)

       c=n-1;

     }

     *(mat+d+(c*n))=a;

    }

   }

  }

  else if (n%4==0)                    // Cuadrado con n multiplo de 4

  {

   c=1;

   for (a=0;a<n;a++)                  // Pongo los numeros en orden, de izquierda a derecha, arriba a abajo

   {

    for (b=0;b<n;b++)

    {

     *(mat+b+(a*n))=c;

     c++;

    }

   }

   for (d=0;d<4;d++)

   {

    for (c=0;c<n;c+=4)        

    {

     a=b=0;

     if (d==0)                        // Reseteo diagonal \ de izquierda a derecha

      b=c;

     else if (d==1)                   // Reseteo diagonal \ de arriba a abajo

      a=c;

     else if (d==2)                   // Reseteo diagonal / de derecha a izquierda

      b=-c+n-1;

     else if (d==3)                   // Reseteo diagonal / de abajo a arriba

     {

      a=c;

      b=n-1;

     }

     while(a<n&&b<n&&a>=0&&b>=0)

     {

      *(mat+b+(a*n))=0;

      a++;

      if (d==2||d==3)

       b--;

      else

       b++;

     }

    }

   }

   c=1;

   for (a=n-1;a>=0;a--)

   {

    for (b=n-1;b>=0;b--)

    {

     if (*(mat+b+(a*n))==0)

     {

      for (d=0;d<n;d++)

      {

       for (e=0;e<n;e++)

       {

        if (*(mat+e+(d*n))==c)

        {

         d=0;

         e=-1;

         c++;

        }

       }

      }

      *(mat+b+(a*n))=c;               // Relleno los espacios faltantes empezando desde la ultima linea, de derecha a izquierda, de abajo hacia arriba

     } 

    }

   }

  }

  else                                // Cuadrado con n par no multiplo de 4

  {

   k=n/4;

   for (a=0;a<n;a++)

   {

    for (b=0;b<n;b++)

    {

     if (a<(k+1)*2)

      *(mat+b+(a*n))=-2;              // -2 equivale a L

     else if (a>((k+1)*2)+1)             

      *(mat+b+(a*n))=0;               // 0 equivale a X

     else                                 

      *(mat+b+(a*n))=-1;              // -1 equivale a U

    }

   }

   for (a=0;a<4;a++)                  // Intercambio L por U en el cuadrado intermedio de la ultima fila L

   {

    for (b=0;b<2;b++)

    {

     *(mat+b+((k+1)*2)-2+((a+((k+1)*2)-2)*n))=-1;

     if (a>1)

      *(mat+b+((k+1)*2)-2+((a+((k+1)*2)-2)*n))=-2;

    }

   }

   b=1;

   for (a=3;a<n;a+=2)                 // Calculo pocision de numero 1

    b++;

   for (a=1;a<=n*n;a++)

   {

    if (a==1)

    {

     c=0;

     d=n-b-1;

    } 

    k=*(mat+d+(c*n));

    for (b=0;b<4;b++)

    {

     e=c;

     f=d;

     if (k==-2)                       // Me muevo en L

     {

      if (b==0||b==2)

       f++;

      if (b==1||b==2)

       e++;

     }

     else if (k==-1)                  // Me muevo en U

     {

      if (b==2||b==3)

       f++;

      if (b==1||b==2)

       e++;

     }

     else if (k==0)                   // Me muevo en X

     {

      if (b==1||b==3)

       f++;

      if (b==1||b==2)

       e++;

     }  

     *(mat+f+(e*n))=a;

     if (b!=3)

      a++;  

    }

    if (a%(2*n)==0)

     c+=2;                            // Si el ultimo numero puesto es multiplo del orden del cuadrado, pongo el numero abajo de este

    else

    { 

     c-=2;                            // Me muevo en diagonal /

     d+=2;

     if (d==n)

      d=0;

     if (c<0)

      c=n-2;

    }

   }

  }

  magia = fopen( "Cuadrado Magico.rtf", "w" );

  fprintf(magia,"Cuadrado Magico de orden n = %i\n\n",n);

  fprintf(magia,"La suma de filas, columnas y diagonales principales es: %i\n\n",(n*((n*n)+1))/2);

  for (a=0;a<n;a++)                   // Imprimo el cuadrado

  {

   for (b=0;b<n;b++)

   {

    fprintf(magia," %5i",*(mat+b+(a*n))); // Imprimo en texto

    printf(" %3i",*(mat+b+(a*n)));

    if (b==n-1)

    {

     fprintf(magia,"\n");

     printf("\n");

    }

   }

  }

  fclose(magia);

  printf("\n  ");

  system("pause");

  free(mat);                  

}

else

  printf("\n  Imposible reservar memoria para cuadrado de orden %i\n\n",n); 

return 0;

}
