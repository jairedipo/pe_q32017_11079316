#include <stdio.h>

int main()
{
    /*definição das váriaveis e scan*/
    int i, contador, aux_1=0, aux_2=1, aux_3=0;
    scanf("%d", &i);
    
    /*calcula fibonacci ate o i-esimo termo e os imprime*/
    for (contador=0; contador<=i; contador++) {
      
      if (contador==0)
        printf("%d", aux_1);
        
      if (contador>0) {
        aux_3 = aux_1 + aux_2;
        aux_1 = aux_2;
        aux_2 = aux_3;
        printf(", %d", aux_1);
      }
    }
    
}
