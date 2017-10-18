#include <stdio.h>
#include <math.h>
double delta(double a, double b, double c);
double baskara1(double a, double b, double del);
double baskara2(double a, double b, double del);
double real (double a, double b);
double imaginario(double a, double del);

double delta(double a, double b, double c)
{
    return b*b-4*a*c;
}

double baskara1(double a, double b, double del)
{
    return (-b-sqrt(del))/(2*a);
}
    
double baskara2(double a, double b, double del)
{
    return (-b+sqrt(del))/(2*a);
}

double real (double a, double b)
{
    return -b/(2*a);
}

double imaginario(double a, double del)
{
    return sqrt(-del)/(2*a);
}

int main() {

    /*definicao de variaveis e scan*/
    double a, b, c, x1, x2, del;
    scanf("%lf %lf %lf", &a, &b, &c);
    
    /*calcula delta*/
    del = delta(a, b, c);

    /*calcula as raizes de acordo com o delta*/
    if (del>0) {
	x1 = baskara1(a, b, del);
	x2 = baskara2(a, b, del);
	printf("%.2f %.2f\n", x1, x2);
    }
    if (del<0) {
	x1 = real(a, b);
	x2 = imaginario(a, del);
	printf("%.2f - %.2fi %.2f + %.2fi\n", x1, x2, x1, x2);
    }
    if (del==0) {
	x1 = real(a, b);
	printf("%.2f\n", x1);
    }
}
