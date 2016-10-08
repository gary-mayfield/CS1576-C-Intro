#include <stdio.h>
int main()
{
	int a = 5, b = 2;
	double result = 0;
	result = a / (double)b;
	printf("The result of %d / %d is %g", a, b, result);
	getchar();
}