#include <stdio.h>
/* main- prints out the grades of based on scores enterd by user
 * Return- 0;
 */
int main(void)
{
	int score;
	/*prompts for user input*/
	printf("Enter your score\n");
	
	scanf("%d", &score);
	/*checks if score is within the range of 80-100*/
	if (score >= 80 && score <= 100)
	{
		printf("Grade A\n");
	}
	/*checks if score is within the range of 70-78*/
	else if (score >= 70 && score <= 79)
	{
		printf("Grade B\n");
	}
	/*checks if score is within the range of 65-69*/
	else if (score >= 65 && score <= 69)
	{
		printf("Grade C\n");
	}
	/*checks if score is within the range of 60-64*/
	else if (score >= 60 && score <= 64)
	{
		printf("Grade D\n");
	}
	/*checks if score is within the range of 50-59*/
	else if (score >= 50 && score <= 59)
	{
		printf("Grade E\n");
	}
	/*checks if score is within the range of 0-49*/
	else if (score >= 0 && score  <= 49)
	{
		printf("Grade F\n");
	}
	/*for non positive integers*/
	else
	{
		printf("Invalid number\n");
	}

	return (0);
}
