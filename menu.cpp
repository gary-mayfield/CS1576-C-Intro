# include <stdio.h>

int main()
{
	char input = 0;

	while (input != 'x')
	{
		printf("MENU\n");
		printf("A. Press A\n");
		printf("B. Press B\n");
		printf("C. Press C\n");
		printf("X. Exit\n");
		input = getchar();
		getchar();

		switch (input)
		{
		case 'a':
		case 'A':
			printf("You have entered a\n\n");
			break;
		case 'b':
		case 'B':
			printf("You have entered b\n\n");
			break;
		case 'c':
		case 'C':
			printf("You have entered c\n\n");
			break;
		case 'x':
		case 'X':
			printf("exit");
			input = 'x';
			break;
		default:
			printf("Enter a valid option\n\n");
			break;
		}
	}
	getchar();
}