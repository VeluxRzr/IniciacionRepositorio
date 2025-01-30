#include <stdio.h>
int main(void)
{
    float a,a2,b,b2,c,c2,y,x;
    printf(" Indica los valores de la acuacion ax+by=c \n");
    printf(" Valor de a ");
    scanf( "%f" , &a);
    printf(" Valor de b ");
    scanf( "%f" , &b);
    printf(" Valor de c ");
    scanf( "%f" , &c);
    printf(" Indica los valores de la acuacion a`x+b`y=c` \n");
    printf(" Valor de a`");
    scanf( "%f" , &a2);
    printf(" Valor de b`");
    scanf( "%f" , &b2);
    printf(" Valor de c`");
    scanf( "%f" , &c2);
    y=(a2*c-a*c2)/(a2*b-a*b2);
    x=(c-b*y)/a;
    printf(" El valor de Y seria %f \n" , (float)y);
    printf(" El valor de X seria %f \n" , (float)x);
    return 0;

}
