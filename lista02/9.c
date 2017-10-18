#include <stdio.h>

int potencia(int x, int y)
{
    if (y==0) 
	return 1;
    return x*potencia(x,y-1);
}

int main() {

    /*definicao de variaveis e scan*/
    int x, y, resultado;
    scanf("%d %d", &x, &y);

    /*calcula x elevado a y e imprime*/
    resultado = potencia(x, y);
    printf("%d\n", resultado);
}
