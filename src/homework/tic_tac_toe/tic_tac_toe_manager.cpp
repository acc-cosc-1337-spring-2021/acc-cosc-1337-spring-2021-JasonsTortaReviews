//cpp
#include "tic_tac_toe_manager.h"
#include "tic_tac_toe.h"


void TicTacToeManager::saved_games(std::unique_ptr<TicTacToe> &b)
{
	update_winner_count(b -> get_winner());
	games.push_back(std::move(b));
	
}

ostream& operator << (ostream& out, const TicTacToeManager& manager)
{
	for(auto &juego : manager.games)
	{
		out<<*juego<<endl;
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
TicTacToeManager::TicTacToeManager(AllGameData &data) : database{data}
{
	
	games = data.get_games();
	for(auto& game : games)
	{
		update_winner_count(game -> get_winner());
	}

}

TicTacToeManager::~TicTacToeManager()
{
	cout<<endl<< "   SAVING GAMES ..."<<endl;
	database.saved_games(games);
	
}