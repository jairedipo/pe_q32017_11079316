#include <stdio.h>
#include <math.h>

int conta_digitos(int n, int base)
{
    if (n==0)
	return base/10;
    return conta_digitos(n/10, base*=10);
}

int palindromo(int valor, int digitos, int base)
{
    if(digitos<=base)
	return 1;
    if(valor/digitos!=valor%base)
	return 0;
    return palindromo((valor%digitos)/10, digitos/100, base);
}

int main() {

    /*definicao de variaveis e scan*/
    int valor, digitos;
    scanf("%d", &valor);

    /*calcula a quantidade de digitos com a base 10,
    *para poder pegar o primeiro digito nas comparacoes*/
    digitos = conta_digitos(valor, 1);

    /*verifica se eh palindromo e imprime*/
    if (palindromo(valor, digitos, 10)==1)
	printf("sim\n");
    else
	printf("nao\n");
}
