#include <stdio.h>

int main()
{
    /*definição das váriaveis e scan*/
    int i, inicio, final, soma_1=0, soma_2=0, diferenca;
    scanf("%d %d", &inicio, &final);
    
    /*condicao de inicio*/
    if (inicio<final) {
      
      /*soma dos quadrados*/
      for (i=inicio; i<=final; i++) {
        soma_1 += pow(i,2);
      }
      printf("soma dos quadrados: %d\n", soma_1);
      
      /*quadrado da soma*/ 
      for (i=inicio; i<=final; i++) {
        soma_2 += i;
      }
      soma_2 = pow(soma_2,2);
      printf("quadrado da soma: %d\n", soma_2);
      
      /*diferenca*/
      diferenca = soma_2-soma_1;
      printf("diferenca: %d\n", diferenca);
    }
}
