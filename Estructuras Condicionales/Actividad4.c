#include <stdio.h>
int main(void)
{
    int num;
    
    printf(" Ingresar un numero del 0 al 99 \n");
    scanf("%d" , &num);

    if (num<=9)
    {
        printf(" El numero tiene un digito ");
    }
    else
    {
        printf(" El numero tiene dos digitos ");
    }

    return 0;
}
