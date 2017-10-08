#include <stdio.h>

int main()
{
    /*definição das váriaveis e scan*/
    int x, i, fatorial=1;
    scanf("%d", &x);
    
    /*calcula o fatorial e imprime*/
    for (i=1; i<=x; i++){
      fatorial *= i; 
    }
    printf("%d", fatorial);
    
}
