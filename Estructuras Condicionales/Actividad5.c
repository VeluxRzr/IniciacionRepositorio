#include <stdio.h>
int main(voice)
{
    int a,b,c;
    float p,area;

    printf(" Introduzca lado a \n");
    printf(" Introduzca lado b \n");
    printf(" Introduzca lado c \n");
    scanf("%d" , &a);
    scanf("%d" , &b);
    scanf("%d" , &c);

    p=(a+b+c)/2;
    area=(p*(p-a)*(p-b)*(p-c))/2;
    
    if (a==b && b==c)
    {
        printf(" Es un triangulo equilatero ");
    }
    if (a==b || b==c ||a==c)
    {
        printf(" Es un triangulo isosceles ");
    }
    else
    {
        printf(" Es un triangulo escaleno ");
    }
    
    printf("y su area es %f" , (float)area);


    return 0;
}
