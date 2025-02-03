#include <stdio.h>
int main(void)
{
    int i,sumPares,sumImpares,promPares;
    float promImpares;
    
    (sumImpares/100)=(float)promImpares;
    sumPares/100=promPares;

    for (i=2;i<=200;i+2)
    {    
        sumPares=sumPares+i;
    }
    for (i=1;i<=199;i+2)
    {
        sumImpares=sumImpares+i;
    }  
    printf(" La suma de pares seria %d\n" , sumPares);
    printf(" La suma de impares seria %d\n" , sumImpares);
    printf(" El promedio de pares seria %d\n" , promPares);
    printf(" El promedio de impares seria %f\n" , (float)promImpares);
  
    return 0;
}
