#include <stdio.h>
#include <time.h>
#include <limits.h>
/*BIGNUM alterado para demorar menos tempo*/
#define BIGNUM 10000000

typedef unsigned long int ulint;

/*soma os bit de um numero*/
ulint f1(ulint x, ulint soma)
{
    if (x==1)
	return 1;
    return f1(x/2, soma+=x%2);
}

/*soma os bit de um numero usando bit-tricks*/
ulint f2(ulint x, ulint soma)
{
    if (x==1)
	return 1;
    return f1(x>>1, soma+=(x&1));
}

/*parte do codigo foi alterada, para envio de dados e saida das funcoes*/
int main(void) {

    clock_t tempo_init, tempo_fim;
    double tempo_gasto;
    ulint soma = 0;

    tempo_init = clock();
    for (int i=1; i<BIGNUM; i++) {
	soma += f1(i,0);
    }
    tempo_fim = clock();
    tempo_gasto = (double)(tempo_fim-tempo_init)/CLOCKS_PER_SEC;
    printf("Tempo gasto na versao normal: %lf\n", tempo_gasto);

    tempo_init = clock();
    for (int i=1; i<BIGNUM; i++) {
	soma += f2(i,0);
    }
    tempo_fim = clock();
    tempo_gasto = (double)(tempo_fim-tempo_init)/CLOCKS_PER_SEC;
    printf("Tempo gasto na versao bitwise: %lf\n", tempo_gasto);

    return 0;
}
