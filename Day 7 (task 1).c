#include <stdio.h>

int main()
{
	int student_num, student_grade[10000], best_grade = 0;
	printf("Enter the number of student : ");
	scanf("%d", &student_num);
	printf("Enter the %d scores : ", student_num);
	for (int i = 0; i < student_num; i++)
	{
		scanf("%d", &student_grade[i]);
		if (i == 0)
		{
			best_grade = student_grade[0];
		}
		else if (student_grade[i] > best_grade)
		{
			best_grade = student_grade[i];
		}
	}
	for (int i = 0; i < student_num; i++)
	{
		if (student_grade[i] >= (best_grade - 10))
		{
			printf("studen %d score is %d and grade is A\n", i + 1, student_grade[i]);
		}
		else if (student_grade[i] >= (best_grade - 20))
		{
			printf("studen %d score is %d and grade is B\n", i + 1, student_grade[i]);
		}
		else if (student_grade[i] >= (best_grade - 30))
		{
			printf("studen %d score is %d and grade is C\n", i + 1, student_grade[i]);
		}
		else if (student_grade[i] >= (best_grade - 40))
		{
			printf("studen %d score is %d and grade is D\n", i + 1, student_grade[i]);
		}
		else
		{
			printf("studen %d score is %d and grade is F\n", i + 1, student_grade[i]);
		}
	}
}
