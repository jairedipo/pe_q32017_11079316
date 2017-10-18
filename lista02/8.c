#include <stdio.h>
float desconto(float salario, float faltas);
float acrescimo(float salario, float hora_extra);
float salario(float salario, float descontos, float acrescimos);

float desconto(float salario, float faltas)
{
    return faltas*(salario/20);
}

float acrescimo(float salario, float hora_extra)
{
    return ((salario/160)+40)*hora_extra;
}

float salario(float salario, float descontos, float acrescimos)
{
    return salario+acrescimos-descontos;
}

int main()
{
    /*definição das váriaveis e scan*/
    int id, faltas, hora_extra;
    float salarios, descontos, acrescimos;
    scanf("%d %d %d", &id, &faltas, &hora_extra);
    
    /*caso para cada id diferente*/
    if (id==1) {
      salarios=10000;
    }
    if (id==2) {
      salarios=8000;
    }
    if (id==3) {
      salarios=5000;
    }
    if (id==4) {
      salarios=3000;
    }
    if (id==5) {
      salarios=2000;
    }
    
    /*calculos utilizando os valores escaneados*/
    descontos = desconto(salarios, faltas);
    acrescimos = acrescimo(salarios, hora_extra);
    salarios = salario(salarios, descontos, acrescimos);
    
    /*impressao*/
    printf("%.2f\n", salarios);
}
