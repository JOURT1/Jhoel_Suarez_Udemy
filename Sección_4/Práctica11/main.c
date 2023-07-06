#include <stdio.h>
#include <stdlib.h>
/*Cargar por teclado y almacenar en un vector el peso de 5 personas.
Obtener el promedio de los mismos. Contar cuántas personas pesan más que el promedio
y cuántas pesan menos.*/

int main()
{
    float pesos[5];
    float suma = 0;

    for (int i=0;i<5;i++){
        printf("Introduce un peso para almacenarlo\n");
        scanf("%f",&pesos[i]);
        suma = suma + pesos[i];
    }

    float promedio = suma / 5;
    int cont_mayor_igual = 0;
    int cont_menor = 0;

    for (int i=0;i<5;i++){
        if (pesos[i] >= promedio){
            cont_mayor_igual ++;
        }
        else{
            cont_menor++;
        }
    }
    printf("El promedio de pesos es: %.2f",promedio);
    printf("Número pesos mayores o iguales que el promedio: %d, Número pesos menores que el promedio: %d",cont_mayor_igual,cont_menor);


}
