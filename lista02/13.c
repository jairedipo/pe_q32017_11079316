#include <stdio.h>

int mdc(int m, int n)
{
    if (n==0||m==0) 
	return m+n;
    return mdc(n, m%n);
}

int main() {

    /*definicao de variaveis e scan*/
    int m, n, resultado;
    scanf("%d %d", &m, &n);

    /*calcula o mdc entre m e n e imprime*/
    resultado = mdc(m, n);
    printf("%d\n", resultado);
}
