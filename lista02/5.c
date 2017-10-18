#include <stdio.h>

int fatorial(int n)
{
    if (n==1) 
	return n;
    return n*fatorial(n-1);
}

int binomial(int n, int k)
{
    return  fatorial(n)/(fatorial(k)*fatorial(n-k));
}

int main() {

    /*definicao de variaveis e scan*/
    int n, k, coeficiente;
    scanf("%d %d", &n, &k);

    /*calcula o coeficiente binomial e imprime*/
    coeficiente = binomial(n, k);
    printf("%d\n", coeficiente);
}
