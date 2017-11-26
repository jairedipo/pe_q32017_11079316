#include <stdio.h>
#include <time.h>
#include <limits.h>
/*BIGNUM alterado para demorar menos tempo*/
#define BIGNUM 1000000000

typedef unsigned long int ulint;

/*recebe dois valores e retorna o maior valor em x e o menor em y*/
ulint f1(ulint *x, ulint *y)
{
    int aux;
    if (*x<*y) {
	aux = *x;
	*x = *y;
	*y = aux;
    }
    return 0;
}

/*recebe dois valores e retorna o maior valor em x e o menor em y usando bit-tricks*/
ulint f2(ulint *x, ulint *y)
{
    int aux;
    if (*x<*y) {
	*x ^= *y;
	*y ^= *x;
	*x ^= *y;
    }
    return 0;
}

/*parte do codigo foi alterada, para envio de dados e saida das funcoes*/
int main(void) {

    clock_t tempo_init, tempo_fim;
    double tempo_gasto;
    ulint soma = BIGNUM;

    tempo_init = clock();
    for (ulint i=1; i<BIGNUM; i++) {
	soma += f1(&soma,&i);
    }
    tempo_fim = clock();
    tempo_gasto = (double)(tempo_fim-tempo_init)/CLOCKS_PER_SEC;
    printf("Tempo gasto na versao normal: %lf\n", tempo_gasto);

    tempo_init = clock();
    for (ulint i=1; i<BIGNUM; i++) {
	soma += f2(&soma,&i);
    }
    tempo_fim = clock();
    tempo_gasto = (double)(tempo_fim-tempo_init)/CLOCKS_PER_SEC;
    printf("Tempo gasto na versao bitwise: %lf\n", tempo_gasto);

    return 0;
}
