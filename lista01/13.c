#include <stdio.h>

int main()
{
    /*definição das váriaveis e scan*/
    int i, entrada, soma=0;
    scanf("%d", &entrada);
    
    /*soma de 1 a i e imprime*/
    for (i=0; i<=entrada; i++) {
      soma += i;
    }
    printf("%d", soma);
    
}
