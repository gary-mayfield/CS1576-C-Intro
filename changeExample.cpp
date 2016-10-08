# include <stdio.h>

int change(int aValue);

int main()
{
	int value = 1;
	value = change(value);
	printf("value: %d", value); 
	getchar();
}
int change(int aValue)
{
	aValue += 1;
	return aValue;
}