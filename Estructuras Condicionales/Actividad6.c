#include <stdio.h>
int main(void)
{
    char caracter;
    int numero;

    printf(" Introduzca caracter entre A y Z numero del 0 al 9 o simbolo .,:;\n");
    scanf("%c" , &caracter);
    scanf("%d" , &numero);
    
    if (caracter>= A && Z =<)
    {
        printf( " Letra mayuscula %c", caracter);
    }
    if (caracter>=a && b=<)
    {
        printf(" Letra minuscula %c", caracter);
    }
    if (caracter=.,;:)
    {
        printf(" Es un simbolo %c", caracter);
    }
    if (caracter=>0 & <9)
    {
        printf(" Es un numero %d" , numero);
    }
    else
      
        printf(" No se reconoce el caracter ")
    
    return 0;
}