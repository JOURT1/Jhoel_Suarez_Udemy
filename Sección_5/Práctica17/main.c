#include <stdio.h>
#include <stdlib.h>

/*Crear un vector de 5 números reales introducidos por teclado.
A continuación, declarar un puntero a dicho vector
y calcular la media de los elementos del vector empleando dicho puntero.*/

int main()
{
    float vector[5];

    for (int i=0; i<5; i++){
        printf("Introduce un numero real\n ");
        scanf("%f",&vector[i]);
    }

    float *puntero = &vector[0];
    float media = 0;

    for (int i=0; i<5; i++){
        media = media + *(puntero+i);
    }
    media = media / 5;

    printf("La media de los valores del vector es %.2f\n", media);
}
