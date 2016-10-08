# include <stdio.h>

int two();

int main()
{
	int one = 1;
	int two1 = two();
	int three = 3;
	printf("one = %d, two = %d, three = %d\n", one, two1, three);
	getchar();
	
}
int two()
{
	int tw = 1;
	tw += 1;
	return tw;
}