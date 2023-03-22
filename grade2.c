#include <stdio.h>
/*
 * main - using switch statement to check condition and outputing result
 * Return: 0
 */
int main(void)
{
	int score;

	printf("Enter your score\n");

	scanf("%d", &score);

	switch (score)
	{
		case 80 ... 100:
			printf("Grade A\n");
			break;
		case 70 ... 79:
			printf("Grade B\n");
			break;
		case 65 ... 69:
			printf("Grade C\n");
			break;
		case 60 ... 64:
			printf("Grade D\n");
			break; 
		case 50 ...59:
			printf("Grade E\n");
			break;
		case 0 ... 49:
			printf("Grade F\n");
			break;
		default:
			printf("Enter a valid score\n");
	}
	return (0);
}
