#include <stdio.h>
#include <stdlib.h>
#include <math.h>
int hanoi_impar(char *v, char *w, int n, int m, int fixo);
int conversao(char *w, int length);

int hanoi_impar(char *v, char *w, int n, int m, int fixo)
{
    /*padrao louco identificado da torre de hanoi*/
    int i, length, length2;
    length = 2*(pow(2, m)-1);
    length2 = pow(2, m+2)-1;
    if (m<=n) {
	for (i=0; i<length; i++) {
	    v[i] = w[fixo];
	    fixo+=1;
	}
	w[fixo] = 60;
	w[fixo+1] = 70;
	fixo+=2;
	for (i=0; i<length; i++) {
	    w[fixo] = v[i]-1;
	    fixo+=1;
	}
	w[fixo] = 60;
	w[fixo+1] = 80;
	fixo+=2;
	for (i=0; i<length2; i++) {
	    w[fixo] = w[i]+1;
	    fixo+=1;
	}
	return hanoi_impar(v, w, n, m+2, 0);
    }
    return 0;
}

int conversao(char *w, int length)
{
    /*converte os valores em letras*/
    int i;
    for (i=0; i<length; i++) {
	w[i] = (unsigned)(w[i]%3)+'A';
    }
}

int main() {

    /*definicao de variaveis e scan*/
    int n, i, length;
    scanf("%d", &n);

    /*definicao dos ponteiros e do tamanho*/
    char *v, *w;
    length = 2*(pow(2,n)-1);
    v = malloc((length)*sizeof(char));
    w = malloc((length)*sizeof(char));

    /*base n=impar e envio para funcao*/
    if (n%2!=0) {
	w[0] = 60;
	w[1] = 80;
	i = hanoi_impar(v, w, n, 1, 0);
    }
    /*base n=par e envio para funcao*/
    else {
	w[0] = 60;
	w[1] = 70;
	w[2] = 60;
	w[3] = 80;
	w[4] = 70;
	w[5] = 80;
	i = hanoi_impar(v, w, n, 2, 0);
    }

    /*conversao e impresao*/
    *w = conversao(w, length);
    if (n%2!=0) 
	printf("A-C");
    else 
	printf("A-B");
    for (i=2; i<length; i+=2) {
	printf(", %c-%c", (char)w[i], (char)w[i+1]);
    }
    printf("\n");
}
