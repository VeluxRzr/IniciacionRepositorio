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
    scanf("%f" , &precionaranja);
    printf("cantidad de limon vendida ");
    scanf("%d" , &limon);
    printf("precio del limon " );
    scanf("%f" , &preciolimon);

    printf("Producto Ventas  Precio  Total\n");
    printf("Cola     %d       %.2f    %.2f     \n" ,cola,preciocola,preciocola*cola);
    printf("Naranja  %d       %.2F    %.2f     \n" ,naranja,precionaranja,precionaranja*naranja);
    printf("Limon    %d       %.2f    %.2f     \n" ,limon,preciolimon,preciolimon*limon);
    printf("TOTAL    %.2F      " , (preciocola*cola+precionaranja*naranja+preciolimon*limon)); 
    
    return 0;
}
