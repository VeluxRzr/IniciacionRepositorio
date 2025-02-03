#include <stdio.h>
int main(void)
{
    int i,sumPares=0,sumImpares=0,promPares;
    float promImpares;
    
    for (i=2;i<=200;i+=2) {    
        sumPares+=i;
        printf(" La suma de pares seria %d\n" , sumPares);
    }
    for (i=1;i<=199;i+=2) {
        printf(" La suma de impares seria %d\n" , sumImpares);
        sumImpares+=i;
    }  
    
    promPares=sumPares/100;
    promImpares=sumImpares/100;

    printf(" El promedio de pares es %d\n" , promPares);
    printf(" El promedio de impares es de %.2f" , (float)promImpares);

    return 0;
}
