#include <stdio.h>

void calcula_transposta(int matriz[][3], int transposta[][3])
{
    int i, j;
    for(i=0; i<3; i++) {
	for(j=0; j<3; j++) {
	    transposta[j][i] = matriz[i][j];
        }
    }
}

int main() {

    /*definicao de variaveis e scan*/
    int i, j, matriz[3][3], transposta[3][3];
    for(i=0; i<3; i++) {
	for(j=0; j<3; j++) {
	    scanf("%d", &matriz[i][j]);
        }
    }

    /*calcula a transposta da matriz e imprime*/
    calcula_transposta(matriz, transposta);
    for(i=0; i<3; i++) {
	for(j=0; j<3; j++) {
	    printf("%d ", transposta[i][j]);
        }
    printf("\n");
    }
}
