# include <stdio.h>

const char a = 'a';
const char b = 'b';

int main()
{
	int c = 20;
	int d = 30;
	printf("%c at memory %u \n", a, &a);
	printf("%c at memory %u \n", b, &b);
	printf("%d at memory %u \n", c, &c);
	printf("%d at memory %u \n", d, &d);
	getchar();
}