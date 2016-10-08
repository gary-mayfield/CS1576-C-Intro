# include <stdio.h>

int main()
{
	int myArray[5] = { 0 };
	int i = 0;
	float average = 0;
	for (int i = 0; i < 5; i++)
	{
		printf("please enter a number for values [%d] :\n", i);
		scanf_s("%d", &myArray[i]);
		average += myArray[i];
	}
	average = average / i;
	for (i = 4; i >= 0; i--)
		printf("myArray[%d] = %d\n", i, myArray[i]);

	printf("Average = %f", average);

	getchar();
	getchar();
}