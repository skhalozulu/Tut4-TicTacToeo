#include "Tictactoe.h"
Tictactoe::Tictactoe()
{
	board[3][3] = 0;
}

Tictactoe::~Tictactoe()
{

}
void Tictactoe::drawboard()
{
	char board[3][3] = { '1', '2', '3', '4', '5', '6', '7', '8', '9' };
	system("cls");
	cout << "The Tic Tac Toe version 1" << endl;
	for (int i = 0; i < 3; i++)
	{
		for (int j = 0; j < 3; j++)
		{
			cout << board[i][j] << " ";
		}
		cout << endl;
	}
}
void Tictactoe::play()
{
	int p;
	cout << "Press the number you like" << endl;
	cin >> p;
	if (p == 1)
	{
		board[0][0] = player;
	}
	else if (p == 2)
	{
		board[0][1] = player;
	}
	else if (p == 3)
	{
		board[0][2] = player;
	}
	else if (p == 4)
	{
		board[1][0] = player;
	}
	else if (p == 5)
	{
		board[1][1] = player;
	}
	else if (p == 6)
	{
		board[1][2] = player;
	}
	else if (p == 7)
	{
		board[2][0] = player;
	}
	else if (p == 8)
	{
		board[2][1] = player;
	}
	else if (p == 9)
	{
		board[2][2] = player;
	}
}
void Tictactoe::toggleplayer()
{
	if (player == 'X')
		player = 'O';
	else
		player = 'X';
}
char Tictactoe::winner()

{
	// First player 
	if (board[0][0] == 'X' && board[0][1] == 'X' && board[0][2] == 'X')
		return 'X';

	if (board[1][0] == 'X' && board[1][1] == 'X' && board[1][2] == 'X')
		return 'X';
	if (board[2][0] == 'X' && board[2][1] == 'X' && board[2][2] == 'X')
		return 'X';
	if (board[0][0] == 'X' && board[1][0] == 'X' && board[2][0] == 'X')
		return 'X';
	if (board[0][1] == 'X' && board[1][1] == 'X' && board[2][1] == 'X')
		return 'X';
	if (board[0][2] == 'X' && board[1][2] == 'X' && board[2][2] == 'X')
		return 'X';
	if (board[0][0] == 'X' && board[1][1] == 'X' && board[2][2] == 'X')
		return 'X';
	if (board[0][2] == 'X' && board[1][1] == 'X' && board[0][2] == 'X')
		return 'X';
	//second player
	if (board[0][0] == 'O' && board[0][1] == 'O' && board[0][2] == 'O')
		return 'X';

	if (board[1][0] == 'O' && board[1][1] == 'O' && board[1][2] == 'O')
		return 'O';
	if (board[2][0] == 'O' && board[2][1] == 'O' && board[2][2] == 'O')
		return 'O';
	if (board[0][0] == 'O' && board[1][0] == 'O' && board[2][0] == 'O')
		return 'O';
	if (board[0][1] == 'O' && board[1][1] == 'O' && board[2][1] == 'O')
		return 'O';
	if (board[0][2] == 'O' && board[1][2] == 'O' && board[2][2] == 'O')
		return 'O';
	if (board[0][0] == 'O' && board[1][1] == 'O' && board[2][2] == 'O')
		return 'O';
	if (board[0][2] == 'O' && board[1][1] == 'O' && board[0][2] == 'O')
		return 'O';

	return '/';
}