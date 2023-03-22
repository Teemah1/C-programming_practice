#include <stdio.h>
int main(void)
{
	int i;
	int arr[9] = {34, 56, 54, 32, 67, 89, 90, 32, 21};
	/*this prints the array in the original order*/
	for (i = 0; i < 9; i++)
	{
		printf("%d ", arr[i]);
	}
	printf("\n");

	for (i = 8; i >= 0; i --)
	{
		printf("%d ", arr[i]);
	}
	printf("\n");
	return 0;
	
}
