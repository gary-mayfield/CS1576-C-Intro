# include <stdio.h>

int timeInSeconds(int h, int m, int s);

int main()
{

	int number = 0;
	printf("enter number of times to print\n");
	scanf_s("%d", &number);
	
	for (int i = number; i != 0; i--)
	{
		int hours, mins, secs, time;
		printf("Enter current time in the format <hours minutes seconds> \n");
		scanf_s("%d %d %d", &hours, &mins, &secs);
		time = timeInSeconds(hours, mins, secs);
		printf("Time converted to seconds is: %d\n", time);
	}
	getchar();
	getchar();
}

int timeInSeconds(int h, int m, int s)
{
	
	int t = (60 * h + m) * 60 + s;
	return t;
}