#include <stdio.h>

/*definicao da ficha de um aluno*/
typedef struct ficha{
    char nome[100];
    int ra;
    float p1;
    float p2;
    float p3;
    float media;
}ficha;

/*calcula a media das notas*/
float media(float x, float y, float z)
{
    return (x+y+z)/3.0;
}

int main()
{
    /*definicao de variaveis*/
    int i;
    ficha alunos[50];
    FILE *lista, *saida;

    /*aberura dos arquivos, um para leitura e outro para escrita*/
    lista = fopen("lista_alunos.txt","r");
    saida = fopen("media_alunos.txt","w");

    /*para cada aluno lido do arquivo, calcula a media e imprime no outro arquivo*/
    for (i=0; i<50; i++) {
	fscanf(lista, "\%s \%d \%f \%f %f", alunos[i].nome, &alunos[i].ra, &alunos[i].p1, &alunos[i].p2, &alunos[i].p3);
	alunos[i].media = media(alunos[i].p1, alunos[i].p2, alunos[i].p3);
	fprintf(saida, "\%s \%d \%.2f \%.2f %.2f %.2f\n", alunos[i].nome, alunos[i].ra, alunos[i].p1, alunos[i].p2, alunos[i].p3, alunos[i].media);
    }
}
