#include <stdio.h>

int main()
{
	float a, b, c, d, e, f, g, solve = 0;
	scanf("%f%f%f%f%f%f%f", &a, &b, &c, &d, &e, &f, &g);
	solve = ((a + ((b / c) * d) - e) * (f - g));
	printf("The Equation = %f\n", solve);
}