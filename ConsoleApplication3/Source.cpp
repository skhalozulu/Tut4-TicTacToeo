#include <iostream>
#include <string>

#include "Tictactoe.h"
using namespace std;

int main()
{
	Tictactoe toe;
	toe.drawboard();
	while (1)
	{
		toe.play();
		toe.drawboard();
		if (toe.winner() == 'X')
		{
			cout << " X wins";
			break;
		}
		else if (toe.winner() == 'O')
		{
			cout << "O wins";
			break;
		}
		toe.toggleplayer();
	}
	return 0;

}