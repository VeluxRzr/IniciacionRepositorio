#include <stdio.h>
int main(void)
{
    int i;
    
    printf(" Numeros del 1 al 50 multiplos de 3\n");
    for (i=1; i<=50; i++)
     {
        if ( i % 3 == 0) 
        {
            printf(" %d \n", i);
        }
    }

    return 0;
}