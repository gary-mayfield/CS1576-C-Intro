# include <stdio.h>

void buildBoard();
void playerMove();
void computerMove();
int check(int*);

char board[9] = { ' ' };
int turn = 1;


int main()
{
	int winner = 0;
	while (winner == 0)
	{
		printf("%d\n", winner);
		playerMove();
		computerMove();
		buildBoard();
		check(&winner);
		turn++;
	}
	getchar();
	getchar();
}

void buildBoard()
{
	for (int i = 0; i < 9; i++)
	{
		if (i % 3 == 0)
		{
			printf("\n---+---+----\n");
		}
		printf(" %c |", board[i]);
	}
	printf("\n");
}

void playerMove()
{
	int choice;
	printf("\nEnter move number: %d\n", turn);
	scanf_s("%d", &choice);
	if (choice >= 0 && choice <= 8)
	{
		if (board[choice] != 'O' && board[choice] != 'X')
		{
			board[choice] = 'X';
			return;
		}
		else
		{
			printf("Enter a valid move\n");
			playerMove();
		}
	}
	else
	{
		printf("Enter a space between 0 and 8\n");
		playerMove();
	}
}

void computerMove()
{
	switch (turn)
	{
	case 1:
		if (board[4] != 'X')
			board[4] = 'O';
		else if (board[2] != 'X')
			board[2] = 'O';
		break;
	case 2:
		if (board[5] != 'X')
			board[5] = 'O';
		else if (board[1] != 'X')
			board[1] = 'O';
		break;
	case 3:
		break;
	case 4:
		break;
	default:
		break;

	}

}

int check(int *win)
{
	if (turn % 2 != 0)
	{

		if (board[0] == 'X' && board[0] == board[1] && board[0] == board[2])
		{
			*win = 1;
			printf("\nWinner 1\n");
			return *win;
		}
		else if (board[3] == 'X' && board[3] == board[4] && board[3] == board[5])
		{
			*win = 1;
			printf("\nWinner 2\n");
			return *win;
		}
		else if (board[6] == 'X' && board[6] == board[7] && board[6] == board[8])
		{
			*win = 1;
			printf("\nWinner 3\n");
			return *win;
		}
		else if (board[0] == 'X' && board[0] == board[3] && board[0] == board[6])
		{
			*win = 1;
			printf("\nWinner 4\n");
			return *win;
		}
		else if (board[1] == 'X' && board[1] == board[4] && board[1] == board[7])
		{
			*win = 1;
			printf("\nWinner 5\n");
			return *win;
		}
		else if (board[2] == 'X' && board[2] == board[5] && board[2] == board[8])
		{
			*win = 1;
			printf("\nWinner 6\n");
			return *win;
		}
		else if (board[0] == 'X' && board[0] == board[4] && board[0] == board[8])
		{
			*win = 1;
			printf("\nWinner 7\n");
			return *win;
		}
		else if (board[2] == 'X' && board[2] == board[4] && board[2] == board[6])
		{
			*win = 1;
			printf("\nWinner 8\n");
			return *win;
		}
		else
		{
			*win = 0;
			printf("\nNo winner\n");
			return *win;
		}
	}
	else
	{
		if (board[0] == 'O' && board[0] == board[1] && board[0] == board[2])
		{
			*win = 1;
			printf("\nWinner CPU 1\n");
			return *win;
		}
		else if (board[3] == 'O' && board[3] == board[4] && board[3] == board[5])
		{
			*win = 1;
			printf("\nWinner CPU 2\n");
			return *win;
		}
		else if (board[6] == 'O' && board[6] == board[7] && board[6] == board[8])
		{
			*win = 1;
			printf("\nWinner CPU 3\n");
			return *win;
		}
		else if (board[0] == 'O' && board[0] == board[3] && board[0] == board[6])
		{
			*win = 1;
			printf("\nWinner CPU 4\n");
			return *win;
		}
		else if (board[1] == 'O' && board[1] == board[4] && board[1] == board[7])
		{
			*win = 1;
			printf("\nWinner CPU 5\n");
			return *win;
		}
		else if (board[2] == 'O' && board[2] == board[5] && board[2] == board[8])
		{
			*win = 1;
			printf("\nWinner CPU 6\n");
			return *win;
		}
		else if (board[0] == 'O' && board[0] == board[4] && board[0] == board[8])
		{
			*win = 1;
			printf("\nWinner CPU 7\n");
			return *win;
		}
		else if (board[2] == 'O' && board[2] == board[4] && board[2] == board[6])
		{
			*win = 1;
			printf("\nWinner CPU 8\n");
			return *win;
		}
		else
		{
			*win = 0;
			printf("\nNo winner\n");
			return *win;
		}
	}
}