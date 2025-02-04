#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int main(void)
{
    int dado1,dado2,numIntentos1=0 ,numIntentos2=0 ,totalIntentos=0;
    srand(time(NULL));

    while ( numIntentos1 < 12 && numIntentos2 < 12)
    {
        dado1= rand() % 6 + 1;
        dado2= rand() % 6 + 1;
        totalIntentos++;
        if (dado1 == 6)
        {
            numIntentos1++;
        }
        if (dado2 == 6)
        {
            numIntentos2++;
        }
        printf(" En %d intentos el dado 1 saco %d y el dado 2 saco %d\n" , totalIntentos, dado1, dado2);
        if (numIntentos1 >=1 && numIntentos2 >=1)
        {
            printf("Ambos dados han obtenido un 6 en %d intentos\n" , totalIntentos);
            break;
        }
        }
        if (numIntentos1 >=1 && numIntentos2 >=1)
        {
            printf("Ambos dados han obtenido un 6 en %d intentos\n" , totalIntentos);
        }
        else
        {    
            printf("Se alcanzo el maximo de 12 intentos en alguno de los dados\n");
        }
    
        
    return 0;
}