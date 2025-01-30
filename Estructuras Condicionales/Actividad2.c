#include <stdio.h>
int main(void)
{
    int numero1,numero2;

    printf(" Introduzca primer numero \n");
    scanf("%d" , &numero1);
    printf(" Introduzca segundo numero \n");
    scanf("%d" , &numero2);

    if (numero1>numero2)
    {
        printf(" El numero %d es mayor " , numero1);
    }
    else 
    {
        printf(" El numero %d es mayor " , numero2);
    }
    
    return 0;
}
