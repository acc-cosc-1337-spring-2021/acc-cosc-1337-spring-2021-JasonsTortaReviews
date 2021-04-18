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
	for (auto thing = manager.game.begin(); thing != manager.game.end(); ++thing) 
	{
		out << *thing;
	}

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