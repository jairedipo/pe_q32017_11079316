#include <stdio.h>
#include <math.h>

/*definicao de um ponto*/
typedef struct ponto{
    float x;
    float y;
    float z;
}ponto;

/*calcula a distacia*/
float distancia(ponto p1, ponto p2)
{
    float eixo_x, eixo_y, eixo_z;
    eixo_x = pow((p2.x-p1.x),2);
    eixo_y = pow((p2.y-p1.y),2);
    eixo_z = pow((p2.z-p1.z),2);
    return sqrt(eixo_x+eixo_y+eixo_z);
}

int main ()
{
    /*definicao de variaveis e scan*/
    ponto p1, p2;
    scanf("%f, %f, %f", &(p1.x), &(p1.y), &(p1.z));
    scanf("%f, %f, %f", &(p2.x), &(p2.y), &(p2.z));

    /*impressao*/
    printf("%.2f\n", distancia(p1, p2));
    return 0;
}
