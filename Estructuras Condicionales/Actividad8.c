#include <stdio.h>
int main(void)
{
    int a,b,c;
    
    printf("Introduzca el primer numero\n");
    scanf("%d" , &a);
    printf("Introduzca segundo numero\n");
    scanf("%d" , &b);
    printf("Introduzca tercer numero\n");
    scanf("%d" , &c);
  
  if (a >= b && a >= c) {
        printf("%d ", a);
        if (b >= c) {
            printf("%d %d\n", b, c);
        } else {
            printf("%d %d\n", c, b);
        }
    } else if (b >= a && b >= c) {
        printf("%d ", b);
        if (a >= c) {
            printf("%d %d\n", a, c);
        } else {
            printf("%d %d\n", c, a);
        }
    } else {
        printf("%d ", c);
        if (a >= b) {
            printf("%d %d\n", a, b);
        } else {
            printf("%d %d\n", b, a);
        }
    }
    
    
    
    return 0;
}
