#include <stdio.h>

int main()
{
    /*definição das váriaveis e scan*/
    int x;
    scanf("%d", &x);
    
    /*verificar se é par ou impar e imprimir*/
    if ((x%2)==0) {
      printf("par");
    }
    else {
      printf("impar");
    }
}
