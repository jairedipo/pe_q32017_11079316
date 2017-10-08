#include <stdio.h>

int main()
{
    /*definição das váriaveis e scan*/
    int i, valor_1, valor_2, valor_3, valor_4, valor_5, valor_6, valor_7, valor_8, valor_9, valor_10, soma;
    float media;
    scanf("%d %d %d %d %d %d %d %d %d %d", &valor_1, &valor_2, &valor_3, &valor_4, &valor_5, &valor_6, &valor_7, &valor_8, &valor_9, &valor_10);
    
    /*soma os 10 valores e imprime*/
    soma = valor_1 + valor_2 + valor_3 + valor_4 + valor_5 + valor_6 + valor_7 + valor_8 + valor_9 + valor_10;
    printf("soma = %d\n", soma);
    
    /*calcula a media e imprime*/
    media = soma/10.0;
    printf("media = %.1f\n", media);
}
