#include <stdio.h>
int main()
{
	int inNum = -1;
	printf("Please enter a number: ");
	scanf_s("%d", &inNum);
	char discard = getchar();
	printf("Correct? ");
	char reply = getchar();
	if (reply == (121|89))	// 121 and 89 are the lower case and upper case ASCII values for Y
	{
		printf("Your reply: %c \n", reply);			// this will omly compute if a version of y is entered
		printf("Number %d was stored in address %u and your reply in address %u \n", inNum, &inNum, &reply);
	}
	else
	{
		printf("Press enter to close");	// Will run if anything other than y is entered
	}
	getchar();
	getchar();
}