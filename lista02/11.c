#include <stdio.h>

int binario(int decimal, int saida, int base)
{
    /*maneira recursiva de converter decimal em binario*/
    if (decimal==0)
	return saida;
    return binario(decimal/2, saida+=(decimal%2)*base, base*10);
}

int decimal(int binario, int saida, int base)
{
    /*maneira recursiva de converter binario em decimal*/
    if (binario==0)
	return saida;
    return decimal(binario/10, saida+=(binario%10)*base, base*2);
}

int main() {

    /*definicao de variaveis e scan*/
    int valor, opcao;
    scanf("%d %d", &valor, &opcao);

    /*convercao*/
    if (opcao==1)
	valor = binario(valor, 0, 1);
    if (opcao==2)
	valor = decimal(valor, 0, 1);

    /*impre o valor convertido*/
    printf("%d\n", valor);
}
