#include <stdio.h>
int main()
{
	const char end = '.';
	char c = 0;
	while (c != end)
	{
		c = getchar();
		putchar(c);
	}
	getchar();
	getchar();
}