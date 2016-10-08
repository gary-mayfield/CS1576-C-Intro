#include <stdio.h>
int main()
{
	char input = 0;
	char pinput = 0;
	int words = 1;
	do
	{
		pinput = input;
		input = getchar();
		if (pinput == ' ')
		{
			if ( (input > 64) && (input < 91) || (input > 96) && (input<123) )
				{
					words++;
				}
		}
	} while (input != '.');
	printf("The total number of words is %d", words);
	getchar();
	getchar();
}