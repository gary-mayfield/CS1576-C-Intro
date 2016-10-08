# include <stdio.h>

int main()
{
	int first, second, *p, *q, sum;

	printf("Enter two integers to add\n");
	scanf_s("%d %d", &first, &second);

	p = &first;
	q = &second;

	sum = *p + *q;

	printf("Sum of entered numbers = %d\n", sum);

	getchar();
	getchar();
}