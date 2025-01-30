#include <stdio.h>
int main(void)
{
    float num1,num2;
    
    printf(" Introduzca primer numero \n");
    scanf("%f" , &num1);
    printf(" Introduzca segundo numero \n");
    scanf("%f" , &num2);

    if (num1>num2)
    {
        printf(" La suma es %.2f y la resta es %.2f ", (float)num1+num2, (float)num1-num2);
    }
    else
    {
        printf(" El producto es %.0f y la division es %.4f " , (float)num1*num2, (float)num1/num2);
    }
    return 0;
}
