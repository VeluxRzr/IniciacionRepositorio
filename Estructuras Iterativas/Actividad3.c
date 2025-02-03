#include <stdio.h>
int main(void)
{
int n,i,menordivisor=-1;
printf(" Indique un numero no primo \n");
scanf("%d", n);

for (i = 2; i <= n; i++) {
    if (n % i == 0) {
        menordivisor = i;
        break;
    }
 }

if (menordivisor != -1){
    printf(" El menor divisor de %d es %d\n" , n,menordivisor);
}
else
{
    printf(" %d Es un numero primo \n", n);
    
}



    return 0;
}