#include <stdio.h>
#include <stdlib.h>

/*funcao para ordenar*/
int cmpfunc(const void *a, const void *b)
{
  return (*(int*)a-*(int*)b);
}

/*calcula a mediana, dado um vetor de tamanho par*/
float mediana_par(int length, int v[])
{
  return (v[(length/2)-1] + v[(length/2)])/2.0;
}

/*calcula a mediana, dado um vetor de tamanho impar*/
float mediana_impar(int length, int v[])
{
  return v[(length/2)];
}

int main() {
  /*definicao de variaveis e scan*/
  int i, length, *v;
  float mediana;
  scanf("%d", &length);

  /*determina o tamanho do vetor*/
  v = malloc(length*sizeof(int));

  /*escaneia o vetor*/
  for (i=0; i<length; i++) {
    scanf("%d", &v[i]);
  }
  
  /*ordena o vetor v*/
  qsort(v, length, sizeof(int), cmpfunc);
  
  /*calcula a mediana de acordo com o tamanho do vetor*/
  if (length%2==0) 
    mediana = mediana_par(length, v);
  else
    mediana = mediana_impar(length, v);
  
  /*imprime a mediana com 2 casas decimais*/
  printf("%.2f\n", mediana);
}
