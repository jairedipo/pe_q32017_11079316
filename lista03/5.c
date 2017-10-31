#include <stdio.h>
#include <stdlib.h>
void compara(int v[], int saida[], int length, int i);

/*caso base, pois os outros termos do vetor serao zerados*/
void conta_zeros(int v[], int length, int saida[])
{
  int i;
  saida[2*(length+1)+1]=-1;
  for (i=0; i<length; i++) {
    if (v[i]==0)
      saida[2*(length+1)+1]++;
  }
}

/*conta o numero de digitos repetidos*/
void conta_digitos(int v[], int length, int saida[])
{
  int i, j;
  for (i=0; i<length-1; i++) {
    if (v[i]!=0) 
      compara(v, saida, length, i);
  }
}

/*faz comparacoes para contar os digitos repetidos*/
void compara(int v[], int saida[], int length, int i)
{
  int j;
    for (j=i+1; j<length; j++) {
    if (v[i]==v[j]) {
      saida[2*i]=v[i];
      saida[2*i+1]++;
      v[j] = 0;
    }
  }
}

int main() {
  /*definicao de variaveis e scan*/
  int i, length, *v, *saida;
  scanf("%d", &length);
  
  /*determina o tamanho do vetor e da saida*/
  v = malloc(length*sizeof(int));
  saida = malloc(2*(length+2)*sizeof(int));
  
  /*escaneia o vetor*/
  for (i=0; i<length; i++) {
    scanf("%d", &v[i]);
  }
  
  /*conta os digitos repetidos*/
  conta_zeros(v, length, saida);
  conta_digitos(v, length, saida);
  
  /*imprime os digitos repetidos*/
  for (i=0; i<=(2*(length+2)); i+=2) {
    if (saida[i+1]>0) {
      printf("%d-%d ", saida[i], saida[i+1]+1);
    }
  }
  printf("\n");
}
