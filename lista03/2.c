#include <stdio.h>
char saida[255]={0};
int tamanho_string(char string[]);
void inverte_string(char string[], int m);

int tamanho_string(char string[])
{
    int i;
    for (i=0; string[i]!='\0'; i++) {}
    return i;
}

void inverte_string(char string[], int m)
{
    int i;
    for (i=0; i<=m; i++) {
	saida[i] = string[m-i];
    }
}

int main() {

    /*definicao de variaveis e scan*/
    int i, length;
    char entrada[255];
    fgets(entrada, 255, stdin);

    /*calcula o tamanho da string e a inverte*/
    length = tamanho_string(entrada);
    inverte_string(entrada, length);

    /*impressao*/
    for (i=2; i<=length; i++) {
	printf("%c", saida[i]);
    }
    printf("\n");
}
