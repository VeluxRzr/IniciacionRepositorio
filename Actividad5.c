#include <stdio.h>


int main(void)
{
    int cantidad;
    float precio;
    printf("Indique el precidel producto\n");
    scanf("%f",&precio);
    printf("Indique cantidad de productos\n");
    scanf("%d",&cantidad);
    printf("El precio a abonar es de: %f" , precio*cantidad);
    return 0;
}