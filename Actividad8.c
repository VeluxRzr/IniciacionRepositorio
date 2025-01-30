#include <stdio.h>
int main(void)
{
    int horas, minutos, seg;
    float segRegistrados, tiempos;
    printf(" Intruduzca los segundos registrados ");
    scanf("%f" , &segRegistrados);

    tiempos=segRegistrados;

    horas=tiempos/60;
    printf(" %d horas " , horas);
    tiempos=tiempos-horas*60;

    minutos=tiempos/0.60;
    printf(" %d minutos " , minutos);
    tiempos=tiempos-minutos*0.60;

    seg=tiempos/0.06;
    printf(" %d segundos " , seg);
    
    return 0;
}
