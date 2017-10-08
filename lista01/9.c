#include <stdio.h>

int main()
{
    /*definição das váriaveis e scan*/
    double temperatura;
    int opcao;
    scanf("%lf %d", &temperatura, &opcao);
    
    /*converte de Celcius para Fahrenheit e imprime*/
    if (opcao==1) {
      temperatura = (temperatura*1.8)+32.0;
      printf("%.1f", temperatura);
    }
    
    /*converte de Fahrenheit para Celcius e imprime*/
    If (opcao==2) {
      temperatura = (temperatura-32.0)/1.8;
      printf("%.1f", temperatura);
    }
}
