#include <stdio.h>
/**
 * main - calculates the BMI(body mass index) of user
 * Return - 0
 */
int main(void)
{
	int weight;
	float height;/*usually in cm will be converted to meter*/
	int bmi;

	printf("Enter your weight\n");

	scanf("%d", &weight);

	printf("Enter your height\n");

	scanf("%f", &height);

	float m = height * height;
	bmi = weight / m;
	printf("Your body mass index is: %d\n", bmi);

	if (bmi <  18)
	{
		printf("Underweight\n");
	}
	else if (bmi >= 18 && bmi <= 25)
	{
		printf("Normal weight\n");
	}
	else if (bmi >= 26 && bmi <= 29)
	{
		printf("Overweight\n");
	}
	else
	{
		printf("Obesity\n");
		if (bmi >= 30 && bmi <= 34)
		{
			printf("Class I Obesity\n");
		}
		else if (bmi >= 35 && bmi <= 39)
		{
			printf("Class II Obesity\n");
		}
		else
		{
			printf("Class III Obesity\n");
		}
	}

	return 0;
}
