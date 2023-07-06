#include <stdio.h>
#include <stdlib.h>

/*En un hotel la información de las habitaciones se guarda en un array en el que cada posición es a su vez otro array
con la información de una habitación concreta. La primera posición de cada array es el número de habitación
y las tres siguientes posiciones es el precio de la habitación en temporada baja, media y alta.

Ejemplo: [[1,120,150,220],[2,130,160,230],[3,100,120,200]]

Escribe un programa en el que se defina una matriz como la anterior y muestre el promedio de cada una de las temporadas.*/

int main()
{
    int informacion[3][4] = {{1,120,150,220},{2,130,160,230},{3,100,120,200}};
    int suma_temp_baja = 0, suma_temp_media = 0, suma_temp_alta = 0;

    for (int i=0; i<3; i++){
        for (int j=1; j<4; j++){
            if (j == 1){
                suma_temp_baja = suma_temp_baja + informacion[i][j];
            }
            if (j == 2){
                suma_temp_media = suma_temp_media + informacion[i][j];
            }
            if (j == 3){
                suma_temp_alta = suma_temp_alta + informacion[i][j];
            }
        }
    }

    float promedio_temp_baja = suma_temp_baja/3;
    float promedio_temp_media = suma_temp_media/3;
    float promedio_temp_alta = suma_temp_alta/3;

    printf("Promedio temporada baja: %.2f\nPromedio temporada media: %.2f\nPromedio temporada alta: %.2f",promedio_temp_baja,promedio_temp_media,promedio_temp_alta);
}
