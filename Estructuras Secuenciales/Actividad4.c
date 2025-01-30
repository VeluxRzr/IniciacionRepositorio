#include <stdio.h>
int main(void)
{
    int a,b,c,d;
    
    printf("Introduzca primer numero ");
    scanf("%d", &a);
    printf("Introduzca segundo numero ");
    scanf("%d", &b);
    printf("Introduzca tercer numero ");
    scanf("%d", &c);
    printf("Introduzca cuarto numero ");
    scanf("%d", &d);
    printf("La suma de los valores es %d y su promedio %.2f" ,a+b+c+d, (float)(a+b+c+d)/4);
    return 0;

}