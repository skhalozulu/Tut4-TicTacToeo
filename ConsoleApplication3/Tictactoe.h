#include <iostream>
#include <string>
using namespace std;

#ifndef TICTACTOE_H
#define TICTACTOE_H

class Tictactoe
{
private:
	char board[3][3];
	char player='X';

public:
	Tictactoe();
	~Tictactoe();
	void drawboard();
	void play();
	void toggleplayer();
	char winner();
};
#endif