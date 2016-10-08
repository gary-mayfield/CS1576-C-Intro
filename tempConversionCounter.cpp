#include <stdio.h>

int main()
{
	int hours, mins, secs, time;
	int count = 0;
	
	while (count < 3)
	{
		printf("Enter current time in the format <hours	minutes seconds> \n");
		scanf_s("%d %d %d", &hours, &mins, &secs);
		time = (60 * hours + mins) * 60 + secs;
		printf("Time converted to seconds is: %d\n\n", time);
		count++;
	}
	getchar();
	getchar();
}