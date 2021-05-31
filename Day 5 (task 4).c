#include <stdio.h>

int main()
{
	int x = 77777, sum = 0;
	for (int i = 0; i < 5; i++)
	{
		if (x % 10 == 7)
		{
			sum += 1;
		}
		x /= 10;
	}
	printf("%d\n", sum);
}