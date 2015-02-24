
// Funció que retorna la inversa de un numero n
void inverso (int n) {
    
    int elevar = num_cifras(n) - 1;                                             //      n    |   elevar   |    suma
                                                                                //     ______|____________|__________
                                                                                //     123   |     2      |      0
    int suma = 0;                                                               //      12   |     1      |     300
                                                                                //      1    |     0      |     320
    while (n/10!=0) {           //  También puede ser (elevar>=0)               //      0    |    -1      |     321 
/*
        //suma = suma + (n % 10)*potencia(10,elevar);
*/
        elevar = elevar - 1;                            // n--;
        n = n / 10;
    }
    
    //return suma;

}

// Función que retorna el numero de cifras de n
int num_cifras(int n) {
    
    int cont=1;
    
    while (n/10!=0) {
        cont++;   
        n=n/10;
    }
    return cont;
}
/*

double potencia (double base, int expo) {
    int i;
    double pot=1; 
    
    for (i=0; i<expo; i++) pot = pot * base;
    
    return pot;
}
*/

// Funció que define si un numero es polindromo
/*void numpalin(int n) {
    n==inverso(n);
}*/