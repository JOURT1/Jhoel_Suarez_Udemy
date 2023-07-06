#include <stdio.h>
#include <stdlib.h>

/*Escribir un programa que dado un array de números de 10 elementos,
mostrar el valor máximo y el mínimo.*/

int main()
{
    int vector[10] = {4,7,9,75,-5,6,12,-18,0,1};
    int maximo = vector[0];
    int minimo = vector[0];

    for (int i=1;i<10;i++){
        if (vector[i] > maximo){
            maximo = vector[i];
        }

        if (vector[i] < minimo){
            minimo = vector[i];
        }
    }

    printf("Valor maximo: %d\nValor minimo: %d",maximo,minimo);
}
