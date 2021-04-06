#include <stdio.h>
#include <locale.h>
#include <math.h>
#include <stdlib.h>
int main()
{
	float a, b, proizv, sum, chastnoe, raznost;
	a != 0;
	b != 0;
	scanf_s("%f", &a);
	scanf_s("%f", &b);
	sum = a + b;
	raznost = a - b;
	proizv = a * b;
	chastnoe = (a) / (b);
	printf("a + b %f\n", sum);
	printf("a - b %f\n", raznost);
	printf("a * b %f\n", proizv);
	printf("abs(a)/abs(b) %f", chastnoe);
	return 0;
}