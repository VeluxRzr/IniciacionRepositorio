#include <stdio.h>
int main(void)

{
    int a,b,c;
    float p,area;

    printf(" Introduzca lado a \n");
    printf(" Introduzca lado b \n");
    printf(" Introduzca lado c \n");
    scanf("%d",&a);
    scanf("%d",&b);
    scanf("%d",&c);

    //p=(float)((a+b+c)/2);
    //area=(float)((p*(p-a)*(p-b)*(p-c))/2);
    
    printf("y su area es %f",area);

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
    
    return 0;
}