#include <stdio.h>
int main(void)
{
    int cola,naranja,limon;
    float preciocola, precionaranja, preciolimon;

    printf("cantidad de cola vendida ");
    scanf("%d" ,&cola);
    printf("precio de la cola ");
    scanf("%f" , &preciocola);
    printf("cantidad de naranja vendida ");
    scanf("%d", &naranja);
    printf("precio de la naranja ");
    sacanf("%f" , &precionaranja);
    printf("cantidad de limon vendida ");
    scanf("%d" , &limon);
    printf("precio del limon" );
    scanf("%f" , &preciolimon);

    printf(" Producto   Ventas   Precio   Total\n");
    printf(" Cola       %d       %f       %f     " ,cola,preciocola,preciocola*cola);
    printf(" Naranja    %d       %F       %f     " ,naranja,precionaranja,precionaranja*naranja);
    printf(" Limon      %d       %f       %f     " ,limon,preciolimon,preciolimon*limon);
    printf("                    TOTAL     %F     " ,(preciocola*cola)+(preciolimon*limon)+(precionaranja*naranja));

    return 0;
}
