#include <stdio.h>
float converter(int tipo, int op_entrada, int op_saida, float valor);
float temperatura(int op_entrada, int op_saida, float valor);
float base_num(int op_entrada, int op_saida, float valor);
int binario(int decimal, int saida, int base);
int decimal(int binario, int saida, int base);

float converter(int tipo, int op_entrada, int op_saida, float valor)
{
    /*define o tipo de convercao*/
    if (tipo==1)
	return temperatura(op_entrada, op_saida, valor);
    if (tipo==2)
	return base_num(op_entrada, op_saida, valor);
}

float temperatura(int op_entrada, int op_saida, float valor)
{
    /*converte a temperatura*/
    if (op_entrada==op_saida && op_entrada<4 && op_entrada>0)
	return valor;
    if (op_entrada==1 && op_saida==2)
	return (valor*1.8)+32.0;
    if (op_entrada==1 && op_saida==3)
	return valor+273.15;
    if (op_entrada==2 && op_saida==1)
	return (valor-32.0)/1.8;
    if (op_entrada==2 && op_saida==3)
	return ((valor-32.0)*5.0/9.0)+273.15;
    if (op_entrada==3 && op_saida==1)
	return valor-273.15;
    if (op_entrada==3 && op_saida==2)
	return ((valor-273.15)*1.8)+32.0;
}

float base_num(int op_entrada, int op_saida, float valor)
{
    if (op_entrada==op_saida && op_entrada<3 && op_entrada>0)
	return valor;
    if (op_entrada==1 && op_saida==2)
	return binario(valor, 0, 1);
    if (op_entrada==2 && op_saida==1)
	return decimal(valor, 0, 1);
}

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
    int tipo, op_entrada, op_saida;
    float valor, resultado;
    scanf("%d %d %d %f", &tipo, &op_entrada, &op_saida, &valor);

    /*converte e imprime*/
    resultado = converter(tipo, op_entrada, op_saida, valor);
    if (tipo==1)
	printf("%.2f\n", resultado);
    if (tipo==2)
	printf("%.0f\n", resultado);
}
