#include <stdio.h>

int main()
{
    /*definição das váriaveis e scan*/
    double temperatura;
    int opcao;
    scanf("%lf %d", &temperatura, &opcao);
    
    /*converte de Celcius para Kelvin e imprime*/
    if (opcao==1) {
      temperatura = temperatura+273.15;
      printf("%.2f", temperatura);
    }
    
    /*converte de Kelvin para Celcius e imprime*/
    if (opcao==2) {
      temperatura = temperatura-273.15;
      printf("%.2f", temperatura);
    }
}
