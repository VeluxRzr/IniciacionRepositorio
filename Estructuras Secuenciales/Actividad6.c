#include <stdio.h>
int main(void)
{
    int cincuenta,veinte,diez,cinco;
    float cantidad, falta;
    printf("Indicar cantidad a devolver\n");
    scanf("%f", &cantidad);
    
    falta=cantidad;
    
    cincuenta=(falta/0.50);
    printf("%d monedas de 50 cent ", cincuenta);
    falta=falta-cincuenta*0.50;

    veinte=(falta/0.20);
    printf("%d monedas de 20 cent ", veinte);
    falta=falta-veinte*0.20;

    diez=(falta/0.10);
    printf("%d monedas de 10 cent ", diez);
    falta=falta-diez*0.10;

    cinco=(falta/0.05);
    printf("%d monedas de 0.5 cent ", cinco);


    
   
     
        return 0;
}