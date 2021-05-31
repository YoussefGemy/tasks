#include <stdio.h>

int main()
{
	int acc_num, credit_lim, amount, acc_num1[3] = { 0 };
	for (int s = 0; s < 3; s++)
	{
		printf("Enter the customer account number : ");
		scanf("%d", &acc_num);
		printf("Enter the customer credit limit : ");
		scanf("%d", &credit_lim);
		printf("Enter the current balance : ");
		scanf("%d", &amount);
		printf("The new credit limit is : %d$\n", credit_lim / 2);
		if (amount > (credit_lim / 2))
		{
			acc_num1[s] = acc_num;
		}
		printf("\n**********************************\n");
	}
	for (int s = 0; s < 3; s++)
	{
		if (acc_num1[s] > 0)
			printf("\nThe customer whose number is %d has exceed the new credit limit\n", acc_num1[s]);
	}
}
