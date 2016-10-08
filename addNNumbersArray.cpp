# include <stdio.h>

int main()
{
	int n, sum = 0, c, array[100];

	printf("Enter the number of integers to be added\n");
	scanf_s("%d", &n);
	printf("Please enter %d integers\n", n);

	for (c = 0; c < n; c++)
	{
		scanf_s("%d", &array[c]);
		sum = sum + array[c];
	}

	printf("Sum = %d\n", sum);

	getchar();
	getchar();
	return 0;
}