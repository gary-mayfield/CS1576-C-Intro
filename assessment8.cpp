# include <stdio.h>

int main()
{
	int k, sum;
	for (sum = 0, k = 1; k <= 10; k++)
	{
		sum += k;
	}
	printf("sum = %d  k = %d\n", sum, k);
	int step = 0;
	for (; step <= k;)
	{
		sum += step++;
	}
	printf("k = %d  step = %d  sum = %d\n", k, step, sum);
	getchar();
}