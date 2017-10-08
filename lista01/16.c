#include <stdio.h>

int main()
{
    /*definição das váriaveis e scan*/
    int id, faltas, hora_extra;
    float salario, descontos, acrescimos;
    scanf("%d %d %d", &id, &faltas, &hora_extra);
    
    /*caso para cada id diferente*/
    if (id==1) {
      salario=10000;
      printf("cargo: Diretor\n");
    }
    if (id==2) {
      salario=8000;
      printf("cargo: Gerente\n");
    }
    if (id==3) {
      salario=5000;
      printf("cargo: Engenheiro\n");
    }
    if (id==4) {
      salario=3000;
      printf("cargo: Tecnico\n");
    }
    if (id==5) {
      salario=2000;
      printf("cargo: Operador\n");
    }
    
    /*calculos utilizando os valores escaneados*/
    descontos = (salario/20)*faltas;
    acrescimos = ((salario/160)+40)*hora_extra;
    salario = salario+acrescimos-descontos;
    
    /*impressoes*/
    printf("# de faltas: %d\n", faltas);
    printf("# horas-extra: %d\n", hora_extra);
    printf("descontos: %.2f\n", descontos);
    printf("acrescimos: %.2f\n", acrescimos);
    printf("salario: %.2f\n", salario);
}
