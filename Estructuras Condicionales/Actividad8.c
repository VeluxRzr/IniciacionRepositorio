#include <stdio.h>
int main(void)
{
    int num1,num2,num3
    
    printf("Introduzca el primer numero\n");
    scanf("%d" , num1);
    printf("Introduzca segundo numero\n");
    scanf("%d" , num2);
    printf("Introduzca tercer numero\n");
    scanf("%d" , num3);

    if (num1<num2<num3)
    {
        printf("%d" , num3);
        printf("%d" , num2);
        printf("%d" , num1);
    }   else if (num3<num1<num1);
    {
        printf("%d" , num1);
        printf("%d" , num3);
        printf("%d" , num1);
    }
    
    
    
    
    return 0;
}
