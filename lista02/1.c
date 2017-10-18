#include <stdio.h>

int parouimpar(int x)
{
    if (x%2==0) 
	return 0;
    return 1;
}

int main() {
    
    /*definicao de variaveis e scan*/
    int numero;
    scanf("%d", &numero);

    /*calcula se o numero e par ou impar e imprime*/
    numero = parouimpar(numero);
    printf("%d\n", numero);
}
