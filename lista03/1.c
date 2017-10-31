#include <stdio.h>

int conta_vogais(char entrada[])
{
    int i, vogal=0;
    for (i=0; entrada[i]!='\0'; i++) {
	if (entrada[i]=='a') vogal++;
	if (entrada[i]=='e') vogal++;
	if (entrada[i]=='i') vogal++;
	if (entrada[i]=='o') vogal++;
	if (entrada[i]=='u') vogal++;
	if (entrada[i]=='A') vogal++;
	if (entrada[i]=='E') vogal++;
	if (entrada[i]=='I') vogal++;
	if (entrada[i]=='O') vogal++;
	if (entrada[i]=='U') vogal++;
    }
    return vogal;
}

int main() {

    /*definicao de variaveis e scan*/
    int quantidade;
    char entrada[255];
    fgets(entrada, 255, stdin);

    /*conta quantas vogais tem e imprime*/
    quantidade = conta_vogais(entrada);
    printf("%d\n", quantidade);
}
