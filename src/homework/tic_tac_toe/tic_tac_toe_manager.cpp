//cpp
#include "tic_tac_toe_manager.h"
#include "tic_tac_toe.h"


void TicTacToeManager::saved_games(TicTacToe b)
{
	game.push_back(b);
	update_winner_count(b.get_winner());
	
}

ostream& operator << (ostream& out, const TicTacToeManager& manager)
{
	for(auto juego : manager.game)
	{
		out<<juego<<endl;
	}
	out<<endl<<"   -------------ScoreBoard-------------"<<endl;
	out<<"\tTotal Wins PLAYER - O : "<<manager.o_win<<endl;
	out<<"\tTotal Wins PLAYER - X : "<<manager.x_win<<endl;
	out<<"\tTotal TIES(HAHA LOSERS) : "<<manager.tie<<endl;

	return out;


}

void TicTacToeManager::get_winner_total(int &x, int &o, int &t)
{
	o = o_win;
	x = x_win;
	t = tie;
}

void TicTacToeManager::update_winner_count(string winner)
{
	if (winner == "X")
	{
		x_win++;
	}
	else if (winner == "O")
	{
		o_win++;
	}
	else 
	{
		tie++;
	}
}