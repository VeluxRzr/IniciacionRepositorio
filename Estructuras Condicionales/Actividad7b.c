#include <stdio.h>
int main (void)
{
    int dia;

    printf("Introduzca un numero del 1 al 7: ");
    scanf("%d" , &dia);

    if (dia == 1)
    {
        printf("Lunes\n");
    }   else if (dia == 2)
    {
        printf("Martes\n");
    }   else if (dia ==3)
    {
        printf("Miercoles\n");
    }   else if (dia == 4)
    {
        printf("Jueves\n");
    }   else if (dia == 5)
    {
        printf("Viernes\n");
    }   else if (dia == 6)
    {
        printf("Sabado\n");
    }   else if (dia == 7)
    {
        printf("Domingo\n");
    }   else {
        printf("Numero incorrecto\n");    
    }
        return 0;
}
