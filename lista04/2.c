#include <stdio.h>

/*definicao de tempo*/
typedef struct tempo{
    int min;
    int seg;
    int dec;
}tempo;

/*converte tempo para decimos*/
int converte(tempo t)
{
    return (t.min*6000)+(t.seg*100)+(t.dec);
}

/*converte de volta para tempo*/
tempo desconverte(int x)
{
    tempo t;
    if (x<0) x *=-1;
    t.min = x/6000;
    x = x%6000;
    t.seg = x/100;
    t.dec = x%100;
    return t;
}

/*calcula a diferenca*/
int diferenca_tempo(tempo t1, tempo t2)
{
    int t;
    t = converte(t2) - converte(t1);
    return t;
}

int main ()
{
    /*definicao de variaveis e scan*/
    tempo t1, t2, t;
    int diferenca;
    scanf("%dm %ds %d", &(t1.min), &(t1.seg), &(t1.dec));
    scanf("%dm %ds %d", &(t2.min), &(t2.seg), &(t2.dec));

    /*calcula a diferenca de tempo convertendo em decimal*/
    diferenca = diferenca_tempo(t1, t2);
    /*converte de volta*/
    t = desconverte(diferenca);

    /*imprime baseado no sinal da diferenca*/
    if (diferenca>0)
	printf("%dm %ds %d\n", t.min, t.seg, t.dec);
    else
	printf("-%dm %ds %d\n", t.min, t.seg, t.dec);
    return 0;
}
