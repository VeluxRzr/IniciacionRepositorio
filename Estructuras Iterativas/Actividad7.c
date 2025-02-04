#include <stdio.h>
int main(void)
{
    int i,n;

    printf(" Introduzca un numero del 0 al 10 \n");
    scanf("%d" , &n);

    for (i=0; i<=10; i++) {
        printf("%d por %d es igual a %d\n", n, i, n * i);
        
    }
    

    return 0;
}