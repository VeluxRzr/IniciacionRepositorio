#include <stdio.h>

int main(void)
{
int arrayOriginal[5] = {1,2,3,4,5};
int arrayCopia[5];

for (int i= 0; i < 5; i++)
{
    arrayCopia[i] = arrayOriginal[i];
}    
for (int i = 0; i < 5; i++)
{    
    printf(" El valor de Array original es %d \n" , arrayOriginal[i]);
    printf(" El valor de Array copia es %d \n" ,  arrayCopia[i]);
}

    return 0;
}