#include <stdio.h>

int main()
{
	float v = 0, u, a, t, d = 0;
	printf("Enter the initial velocity,the acceleration and the time : ");
	scanf("%f%f%f", &u, &a, &t);
	v = u + a * t;
	d = u * t + 0.5 * t * t * a;
	printf("The final Velocity = %.1f m/s\n", v);
	printf("The Distance = %.1f m\n", d);

}