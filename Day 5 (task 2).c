#include<stdio.h>

int main()
{
    float weight, height, Bmi = 0;
    scanf("%f%f", &weight, &height);
    printf("Bmi VALUE\t%.1f\n", weight / height);
    printf("Underweight:\tless than 18.5\n");
    printf("Normal:\t\tbetween 18.5 and 24.5\n");
    printf("Overweight:\tbetween 25 and 29.9\n");
    printf("Underweight:\t30 or greater\n");
}