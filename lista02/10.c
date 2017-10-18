#include <stdio.h>

int fibMem[1000];
int fib(int n)
{
    if (n==0) return 0;
    if (n<=2) return 1;

    /*verifica se o vetor já possuia o valor
    *se não tinha, o preenche com o valor correto*/
    int i, valor = fib(n-1)+fib(n-2);
    for (i=0; i<1000; i++) {
	if (fibMem[i]==valor)
	    return fibMem[i];
    }
    fibMem[1] = valor;
    return fibMem[1];
}

int main ()
{
    /*definicao de variaveis e scan*/
    int n, i=0;
    fibMem[1] = 1;
    fibMem[2] = 1;
    scanf("%d", &n);
    
    /*imprime o n-esimo termo de fibonacci*/
    printf("%d\n", fib(n));
    return 0;
}
