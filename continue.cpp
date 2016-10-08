# include <stdio.h>

int main()
{
	const int KMaxIterations = 10;
	const float KZeroFloat = 0.0f;
	float data, sum = KZeroFloat;
	int i = 0;
	for (; i < KMaxIterations; i++)
	{
		scanf_s("%f", &data);
		if (data < KZeroFloat)
		{
			i--;
			continue;
		}
		sum += data;
		//i++; can also be put here and removed from the for loop if desired
	}
	printf("The sum is %f", sum);
	getchar(); getchar();
}