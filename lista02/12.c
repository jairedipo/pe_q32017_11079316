#include <stdio.h>

int fatorial(int n)
{
    /*calcula o fatorial de n*/
    if (n==0)
	return 1;
    return n*fatorial(n-1);
}

int binomial(int n, int k)
{
    /*calcula o binomial de n e k*/
    return (fatorial(n))/(fatorial(k)*fatorial(n-k));
}

int triangulo(int n, int k)
{
    /*calcula o binomial pelo triangulo de Pascal
    *onde a soma dos binomias da coluna anterior
    *na casa acima eh equivalente*/
    if (n==k)
	return 1;
    return binomial(n, k)+triangulo(n-1, k);
}

int main() {

    /*definicao de variaveis e scan*/
    int n, k, resultado;
    scanf("%d %d", &n, &k);

    /*calcula o binomial e imprime*/
    resultado = triangulo(n-1,k-1);
    printf("%d\n", resultado);
}
