#include <stdio.h>
int main(void)

{
    float a,b,c,p,area;

    printf(" Introduzca lado A \n");
    scanf("%f",&a);
    printf(" Introduzca lado B \n");
    scanf("%f",&b);
    printf(" Introduzca lado C \n");
    scanf("%f",&c);
    
    p=(float)((a+b+c)/2);
    area=(float)((p*(p-a)*(p-b)*(p-c))/2);
    
    if (a==b && b==c)
    {
        printf(" Es un triangulo equilatero ");
    }
    if (a==b || b==c || a==c)
    {
        printf(" Es un triangulo isosceles ");
    }
    else
    {
        printf(" Es un triangulo escaleno ");
    }
        printf("y su area es %.2f",area);
    
    return 0;
}
