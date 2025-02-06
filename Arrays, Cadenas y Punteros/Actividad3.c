#include <stdio.h>
#include <string.h>
int main(void)
{
    int  i,longitud;
    char array[30]
    
    
    printf("Introduzca los caracteres\n");
    fgets(array, sizeof(array), stdin); 
    
    array[strcspn(array, \"n")] = '\0';

    longitud = strlen(array);

    printf("La cadena introducida tiene %d caracteres de longitud. \n" , longitud);
    printf("La cadena al reves es: ");

    for (i = longitud - 1; i >=0; i--)
    {
        printf("%c", array[i]);
    }
    return 0;
}
