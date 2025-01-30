#include <stdio.h>
int main(void)
{
    int codigoArticulo,cantidadArticulos,descuento;
    float precio,precioTotal,precioFinal,precioIva,cantidadDescuento;

    printf(" Indique codigo de articulo max 6 digitos \n");
    scanf("%d" , &codigoArticulo);    
    printf(" Indique el precio del articulo \n");
    scanf("%f" , &precio);
    printf(" Indique la cantidad de articulos \n");
    scanf("%d" , &cantidadArticulos);
    printf(" Indique el descuento del articulo \n");
    scanf("%d" , &descuento);
    
    precioTotal=precio*cantidadArticulos;
    cantidadDescuento=precioTotal*descuento/100;
    precioIva=precioTotal*16/100;
    precioFinal=precioTotal-descuento+precioIva;

    printf("        ---RAZA---     \n");
    printf("  %d              %.2f     \n" , codigoArticulo,(float)precio);
    printf("  %d                  %.2f     \n" , cantidadArticulos,(float)precioTotal);
    printf(" %d Descuento        %.2f     \n" , descuento*-1,(float)cantidadDescuento);
    printf("  16 IVA              %.2f     \n" , (float)precioIva);
    printf("  TOTAL              %.2f     \n" , (float)precioFinal);
    
    return 0;
}
