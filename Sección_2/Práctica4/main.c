#include <stdio.h>
#include <stdlib.h>

int main()
{
    float euros;
    printf("Introduce los euros que quieres convertir\n");
    scanf("%f",&euros);
    //pesetas = euros * 166.386
    printf("%.2f euros equivalen a %.2f pesetas",euros,euros*166.386);

}
