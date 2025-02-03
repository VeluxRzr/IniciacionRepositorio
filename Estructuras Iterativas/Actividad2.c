#include <stdio.h>
int main(void)
{
int n,i,t1=0,t2=1,next;

 printf(" Indique el numero de interacciones deseadas \n");
 scanf("%d" , &n);
 printf(" Serie de Fibonacci\n");

for ( i= 0; i<=n; i++) {
    printf("%d" , t1);
    next=t1+t2;
    t1=t2;
    t2=next;
}
    return 0;
}