#include <stdio.h>
int main(void)
{
    char letra,a=1,e=2,i=3,o=4,u=5;

    printf("Introduzca letra\n");
    scanf("%c" , &letra);

    switch (letra)
    {
    case 1:
        printf("Es una vocal\n");
        break;
    case 2:
        printf("Es una vocal\n");
        break;
    case 3:
        printf("Es una vocal\n");
        break;
    case 4:
        printf("Es una vocal\n");
        break;
    case 5:
        printf("Es una vocal\n");
        break;
    default:
        printf("No es una vocal");
        break;
    }
    return 0;
}
