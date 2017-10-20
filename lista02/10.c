#include <stdio.h>

int fibMem[1000]={0};

int fib(int n)
{
    if (n==0) return 0;
    if (n<=2) return 1;

    /*verifica se o vetor já possuia o valor
    *se não tinha, o preenche com o valor correto*/
    if (fibMem[n]==0)
	fibMem[n] = fib(n-1) + fib(n-2);
    return fibMem[n];
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
