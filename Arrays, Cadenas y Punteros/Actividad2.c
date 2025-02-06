#include <stdio.h>

int main(void)
{
    int tabla[3][2];
    int i,j,filaMax,filaMin,tablaMax,tablaMin;

    for (i=0;i<3;i++)
    {
        for (j =0;j<2;j++)
        {
         printf("Introduzca los valores fila %d columna %d: " , i, j);
         scanf("%d" , &tabla[i][j]);
        }
    }   
        for  (i = 0; i < 3; i++)
    {
        for (j = 0; j < 2; j++)
        {
        printf("%d " , tabla[i][j]);
        }
        printf("\n");
    }
    
    
    
    
    
    
    return 0;
}