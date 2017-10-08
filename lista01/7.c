#include <stdio.h>

int main()
{
    /*definição das váriaveis e scan*/
    int x, y;
    scanf("%d %d", &x, &y);
    
    /*calcula x elevado a y e imprime*/
    x = pow(x,y);
    printf("%d", x);
    
}
