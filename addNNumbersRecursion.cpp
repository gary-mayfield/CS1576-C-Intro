# include <stdio.h>

long calculateSum(int[], int); // function prototype

int main()
{
	int n, c, array[100];
	long result;

	printf("Enter the number of integers to be added\n");
	scanf_s("%d", &n);
	printf("Enter %d integers\n", n);

	for (c = 0; c < n; c++)
		scanf_s("%d", &array[c]);

	result = calculateSum(array, n);

	printf("Sum = %ld\n", result);

	getchar();
	getchar();
	return 0;
}

long calculateSum(int a[], int n)
{
	static long sum = 0;

	if (n == 0)
		return sum;

	sum = sum + a[n - 1];

	return calculateSum(a, --n);
}