# include <stdio.h>

int main()
{
	int x, y, temp;

	printf("Enter the value of x and y\n");
	scanf_s("%d %d", &x, &y);

	printf("Before swapping\nx = %d\ny = %d\n", x, y);

	temp = x;
	x = y;
	y = temp;

	printf("After swapping\nx = %d\ny = %d\n", x, y);

	getchar();
	getchar();
	return 0;
}