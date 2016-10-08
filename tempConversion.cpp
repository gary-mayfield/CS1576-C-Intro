#include <stdio.h>


int main()
{
	float c;
	printf("Enter a value\n");
	scanf_s("%g", &c);
	printf("The value you entered is %.2f \n", c);
	float f = ((float) 9 / 5)* c + 32;
	
	printf("The Fahrenheit equivalent of %.2f Celsius is %.2f \n", c, f);
	getchar();
	getchar();
}