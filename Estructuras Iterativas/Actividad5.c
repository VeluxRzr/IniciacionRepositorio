#include <stdio.h>
int main(void)
{
int notas[10];
int i;
int mayoresIgualesSiete=0;
int menoresSiete=0;

printf(" Introduce las diez notas de los alumnos \n");
for (i=0; i<10; i++) {
    scanf("%d" , notas[i]);
}

for (i=0; i<10; i++) {
    if (notas[i]>=7) {
        mayoresIgualesSiete++;
    }else{
        menoresSiete++;
}
}
printf(" Cantidad de mayores o iguales %d" , mayoresIgualesSiete);
printf(" Menores de siete %d" , menoresSiete);

return 0;
}