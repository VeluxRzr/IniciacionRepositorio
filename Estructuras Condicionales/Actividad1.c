#include <stdio.h>
int main(void)
{
    float sueldo;

    printf(" Introduzca importe del sueldo \n");
    scanf("%f" , &sueldo); 

    if (sueldo>3000)
    {
        printf(" Debe pagar impuestos ");
    }
    else
    {
        printf(" Esta exento de impuestros ");
    }
    return 0;
}
