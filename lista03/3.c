#include <stdio.h>

void soma_arrays(int v1[], int v2[], int v3[])
{
    int i;
    for(i=0; i<5; i++) {
	v3[i] = v1[i] + v2[i];
    }
}

int main() {

    /*definicao de variaveis e scan*/
    int v1[5], v2[5], v3[5], i;
    for(i=0; i<5; i++) {
	scanf("%d", &v1[i]);
    }
    for(i=0; i<5; i++) {
	scanf("%d", &v2[i]);
    }

    /*soma as arrays e imprime*/
    soma_arrays(v1, v2, v3);
    for(i=0; i<5; i++) {
	printf("%d ", v3[i]);
    }
    printf("\n");
}
