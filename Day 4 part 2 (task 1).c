#include <stdio.h>

int main()
{
	int x, sum = 0;
	printf("Enter a number consist if 3 digits : ");
	scanf("%d", &x);
	for (int s = 0; s < 3; s++)
	{
		sum += x % 10;
		x /= 10;
	}
	printf("The sum of digits = %d", sum);
}