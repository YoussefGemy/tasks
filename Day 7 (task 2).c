#include <stdio.h>

int main()
{
	int arr[10] = { 1,2,2,4,4,6,9,1,9,10 }, arr2[10] = { 0 }, i, elements = 1;
	for (int s = 0; s < 10; s++)
	{
		i = 0;
		if (s == 0)
		{
			printf("%d ", arr[s]);
		}
		else
		{
			for (int s1 = 0; s1 < s; s1++)
			{
				if (arr[s] == arr[s1])
				{
					i++;
				}
			}
			if (i == 0)
			{
				printf("%d ", arr[s]);
			}
		}
	}
	puts("");
}
