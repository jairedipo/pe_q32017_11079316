#include <stdio.h>
#include <math.h>

double aprox_pi(double a, double b, double t, double p)
{
    double a1;
    for (int x=0; x<10; x++) { 
	a1 = (a+b)/2.0;
	b = sqrt(a*b);
	t -= p*pow(a-a1,2);
	p *= 2.0;
	a = a1;
    }
    return (pow(a+b, 2.0))/(4.0*t);
}
    

int main() {
    
    /*definicao de variaveis e scan*/
    double a=1.0, b=1.0/sqrt(2), t=1.0/4.0, p=1, pi;
    
    /*aproxima pi com 10 interações definadas pelo
    *algoritmo de Gauss-Legendre e imprime*/
    pi= aprox_pi(a,b,t,p);
    printf("%.20f\n", pi);
}
