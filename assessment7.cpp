# include <stdio.h>

int main()
{
	int a, b, swap;

	printf("Input two integers: \n");
	scanf_s("%d %d", &a, &b);

	if (a < b)
	{
		swap = a;
		a = b;
		b = swap;
		printf("\nSwapping a and b. \n");
	}
	
	if (a % 2 != 0)
	{
		if (b % 2 != 0)
		{
			printf("\n%d = a and %d = b are odd\n", a, b);
		}
		else
		{
			printf("\n%d = a is odd and %b = even\n", a, b);
		}
	}
	else if (a % 2 == 0)
	{
		if (b % 2 == 0)
		{
			printf("\n%d = a and %d = b are even\n", a, b);
		}
		else
		{
			printf("\n%d = a is even and %b = odd\n", a, b);
		}
	}
	

	getchar();
	getchar();
}