#include <stdio.h>
#include <math.h>
float soma(float x, float y);
float subtracao(float x, float y);
float produto(float x, float y);
float divisao(float x, float y);
float potencia(float x, float y);


float soma(float x, float y)
{
    return x+y;
}

float subtracao(float x, float y)
{
    return x-y;
}

float produto(float x, float y)
{
    return x*y;
}

float divisao(float x, float y)
{
    return x/y;
}

float potencia(float x, float y)
{
    return pow(x,y);
}

int main() {
    
    /*definicao de variaveis e scan*/
    float x, y, resultado;
    int operacao;
    scanf("%d %f %f", &operacao, &x, &y);
    
    /*operacao entre x e y*/
    if (operacao==1)
	resultado = soma(x, y);
    if (operacao==2)
	resultado = subtracao(x, y);
    if (operacao==3)
	resultado = produto(x, y);
    if (operacao==4)
	resultado = divisao(x, y);
    if (operacao==5)
	resultado = potencia(x, y);

    /*imprime o resultado da operacao*/
    printf("%.2f\n", resultado);
}
